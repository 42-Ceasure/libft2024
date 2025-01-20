/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:05:29 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/20 11:25:42 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strccount(const char *str, char c)
{
	size_t	count;
	char	*ptr;

	count = 0;
	ptr = (char *)str;
	while ((ptr = ft_strchr(ptr, c)) != NULL)
	{
		count++;
		ptr++;
	}
	return (count);
}
