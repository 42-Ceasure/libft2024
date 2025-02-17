/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:35:34 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 08:27:03 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_type.h>

static const char	*skip_whitespace(const char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	return (str);
}

double	ft_virgule(const char *str, double value)
{
	double	cpt;
	double	virgule;

	cpt = 1.0;
	virgule = 0.0;
	if (*str == '.')
	{
		str++;
		while ((*str >= '0') && (*str <= '9'))
		{
			virgule = (virgule * 10) + (*str - '0');
			cpt *= 10;
			str++;
		}
		value += virgule / cpt;
	}
	return (value);
}

int	sign(const char *str)
{
	if (*str == '-')
		return (-1);
	else if (*str == '+')
		return (1);
	return (0);
}

double	ft_atof(const char *str)
{
	int		neg;
	double	value;

	value = 0.0;
	str = skip_whitespace(str);
	neg = sign(str);
	if (neg == 0)
		neg = 1;
	else
		str++;
	if (*str == '\0')
		return (NAN);
	while (ft_isdigit(*str))
	{
		if (value > (DBL_MAX / 10.0) || (value == (DBL_MAX / 10.0)
				&& (*str - '0') > (DBL_MAX - value * 10.0)))
			return (neg * DBL_MAX);
		value = (value * 10) + (*str - '0');
		str++;
	}
	if (*str != '.' && (*str < '0' || *str > '9'))
		return (NAN);
	value = ft_virgule(str, value);
	return (value * neg);
}
