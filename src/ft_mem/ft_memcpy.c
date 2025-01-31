/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:23:42 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/31 17:04:18 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_byte;
	const unsigned char	*src_byte;
	size_t				*dest_size_t;
	const size_t		*src_size_t;

	dest_byte = (unsigned char *)dest;
	src_byte = (const unsigned char *)src;
	while (((uintptr_t)dest_byte % sizeof(size_t)) != 0 && n > 0)
	{
		*dest_byte = *src_byte;
		dest_byte++;
		src_byte++;
		n--;
	}
	dest_size_t = (size_t *)dest_byte;
	src_size_t = (const size_t *)src_byte;
	while (n >= sizeof(size_t))
	{
		*dest_size_t = *src_size_t;
		dest_size_t++;
		src_size_t++;
		n -= sizeof(size_t);
	}
	dest_byte = (unsigned char *)dest_size_t;
	src_byte = (const unsigned char *)src_size_t;
	while (n--)
	{
		*dest_byte = *src_byte;
		dest_byte++;
		src_byte++;
	}
	return (dest);
}
