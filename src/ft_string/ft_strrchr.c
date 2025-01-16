/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 07:58:25 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 14:51:46 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*start = s;

	while (*s != '\0')
		s++;
	while (s > start && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
