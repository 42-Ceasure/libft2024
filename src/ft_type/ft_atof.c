/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:35:34 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/31 17:15:25 by cglavieu         ###   ########.fr       */
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

double	ft_atof(const char *str)
{
	int		is_negative;
	double	value;

	is_negative = 0;
	value = 0.0;
	str = skip_whitespace(str);
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	if (*str == '\0')
		return (NAN);
	while ((*str >= '0') && (*str <= '9'))
	{
		if (value > (DBL_MAX / 10.0) || (value == (DBL_MAX / 10.0)
				&& (*str - '0') > (DBL_MAX - value * 10.0)))
			return (is_negative ? -DBL_MAX : DBL_MAX);
		value = (value * 10) + (*str - '0');
		str++;
	}
	if (*str != '.' && (*str < '0' || *str > '9'))
		return (NAN);
	value = ft_virgule(str, value);
	if (is_negative)
		value = -value;
	return (value);
}
