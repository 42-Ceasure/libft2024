/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalidint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:59:21 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/31 17:02:19 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_is.h>

int	ft_isvalidint(const char *str)
{
	while (ft_isspace(*str))
		str++;
	if (*str == '\0')
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		return (0);
	while (*str && ft_isdigit(*str))
		str++;
	while (*str && (ft_isspace(*str)))
		str++;
	if (*str != '\0')
		return (0);
	return (1);
}
