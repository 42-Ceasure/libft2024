/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:55:19 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/18 18:30:50 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mem.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ret;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	bytes = nmemb * size;
	ret = malloc(bytes);
	if (!ret)
		return (NULL);
	ft_memset(ret, 0, bytes);
	return (ret);
}
