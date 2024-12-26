/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 07:21:02 by cglavieu          #+#    #+#             */
/*   Updated: 2024/12/26 10:11:21 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*strdup(const char *s)
{
	char	*ret;
	char	*dest;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret != NULL)
	{
		dest = ret;
		while (*s != '\0')
		{
			*dest = *s;
			dest++;
			s++;
		}
		*dest = '\0';
	}
	return (ret);
}
