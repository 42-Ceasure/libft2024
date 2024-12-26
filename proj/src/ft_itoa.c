/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 08:28:53 by cglavieu          #+#    #+#             */
/*   Updated: 2024/12/26 09:57:01 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int nb)
{
	int			i = 11;
	long		mem;
	static char	number[12];

	mem = (long)nb;
	if (nb < 0)
		mem = -mem;
	number[i] = '\0';
	while (mem > 0 && i--)
	{
		printf("i:%d  mem:%ld\n", i, mem);
		number[i] = ((int)(mem % 10) + '0');
		mem = mem / 10;
	}
	printf("i:%d  mem:%ld\n", i, mem);
	if (nb < 0)
		number[--i] = '-';
	return (number + i);
}
