/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 08:28:53 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 17:12:29 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int nb)
{
	int			i = 11;
	long		mem;
	static char	number[12];

	if (nb == 0)
		return ("0");
	mem = (long)nb;
	if (nb < 0)
		mem = -mem;
	number[i] = '\0';
	while (mem > 0 && i--)
	{
		number[i] = ((int)(mem % 10) + '0');
		mem = mem / 10;
	}
	if (nb < 0)
		number[--i] = '-';
	return (number + i);
}
