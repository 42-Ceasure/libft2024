/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:21:20 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 11:22:04 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int	realloc_save(t_svg *svg, size_t ret)
{
	size_t	new_size;
	char	*new_save;

	new_size = svg->len_save + ret + 1;
	new_save = (char *)malloc(new_size);
	if (!new_save)
		return (-1);
	if (svg->save)
	{
		ft_memcpy(new_save, svg->save, svg->len_save);
		free(svg->save);
	}
	svg->save = new_save;
	svg->save_size = new_size;
	return (0);
}

char	*allocate_line(char *save, size_t line_len)
{
	char	*line;

	line = (char *)malloc(line_len + 1);
	if (!line)
		return (NULL);
	ft_memcpy(line, save, line_len);
	line[line_len] = '\0';
	return (line);
}
