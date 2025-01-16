/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:55:19 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 12:39:16 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ret;

	bytes = nmemb * size;
	if (bytes == 0)
		bytes = 1;
	ret = (void *)malloc(bytes);
	ft_memset(ret, 0, bytes);
	return (ret);
}
