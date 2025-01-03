/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 07:58:25 by cglavieu          #+#    #+#             */
/*   Updated: 2024/12/26 10:28:01 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*strrchr(const char *s, int c)
{
	char	*start = s;

	while (*s != '\0')
		s++;
	while (s > start && *s != c)
		s--;
	if (*s == c)
		return (s);
	return (NULL);
}
