/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:35:34 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/31 17:17:37 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_type.h>

int	ft_atoi(const char *nptr)
{
	int	number;
	int	neg;

	number = 0;
	neg = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (!ft_isdigit(*nptr))
	{
		if (*nptr == '-')
			neg = -1;
		else if (*nptr != '+')
			return (0);
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		number = (number * 10) + (*nptr - '0');
		nptr++;
	}
	if (neg < 0)
		return (-number);
	else
		return (number);
}
