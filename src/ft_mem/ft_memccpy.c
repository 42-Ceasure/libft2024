/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:10:37 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 12:40:15 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		if (*(unsigned char *)dest == (unsigned char)c)
			return (++dest);
		src++;
		dest++;
	}
	return (NULL);
}
