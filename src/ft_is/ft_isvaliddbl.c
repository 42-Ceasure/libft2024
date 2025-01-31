/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvaliddbl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:11:14 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/31 17:02:26 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_is.h>

int	ft_isvaliddbl(const char *str)
{
	int	point_seen;

	point_seen = 0;
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str == '.')
		{
			if (point_seen)
				return (0);
			point_seen = 1;
		}
		else if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
