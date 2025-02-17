/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_processing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:32:25 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 11:33:07 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

char	*find_newline(char *save, size_t len_save)
{
	return (ft_memchr(save, '\n', len_save));
}

int	process_line(char **save, size_t *len_save, char **line)
{
	char	*ptr;
	size_t	line_len;

	ptr = find_newline(*save, *len_save);
	if (ptr)
	{
		line_len = ptr - *save + 1;
		*line = allocate_line(*save, line_len);
		if (!*line)
			return (-1);
		update_save(save, line_len, len_save);
		return (1);
	}
	return (0);
}
