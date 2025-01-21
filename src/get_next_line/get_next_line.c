/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:41:18 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/21 18:58:42 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int check_params(int const fd, char **line)
{
	if (!line || fd < 0)
		return (-1);
	return (0);
}

char *find_newline(char *save, size_t len_save)
{
	return (ft_memchr(save, '\n', len_save));
}

char *allocate_line(char *save, size_t line_len)
{
	char *line = (char *)malloc(line_len + 1);
	if (!line)
		return NULL;
	ft_memcpy(line, save, line_len);
	line[line_len] = '\0';
	return (line);
}

void update_save(char **save, size_t line_len, size_t *len_save)
{
	*len_save -= (line_len);
	ft_memmove(*save, *save + line_len, *len_save);
	(*save)[*len_save] = '\0';
}

int realloc_save(char **save, size_t *save_size, size_t len_save, size_t ret)
{
	size_t new_size;
	char *new_save;

	new_size = len_save + ret + 1;
	new_save = (char *)malloc(new_size);
	if (!new_save)
		return (-1);
	if (*save)
	{
		ft_memcpy(new_save, *save, len_save);
		free(*save);
	}
	*save = new_save;
	*save_size = new_size;
	return (0);
}

void append_buffer_to_save(char **save, size_t *len_save, char *buffer,
	size_t ret)
{
	ft_memcpy(*save + *len_save, buffer, ret);
	*len_save += ret;
	(*save)[*len_save] = '\0';
}

int handle_remaining_data(char **save, char **line, size_t len_save)
{
	if (len_save > 0)
	{
		*line = *save;
		*save = NULL;
		return (1);
	}
	return (0);
}

int read_data(int fd, char *buffer)
{
	int ret = read(fd, buffer, BUFF_SIZE);
	if (ret == -1)
		return (-1);
	buffer[ret] = '\0';
	return ret;
}

int process_buffer(char **save, size_t *len_save, char *buffer, size_t ret,
	size_t *save_size)
{
	if (*len_save + ret + 1 > *save_size)
	{
		if (realloc_save(save, save_size, *len_save, ret) == -1)
			return (-1);
	}
	append_buffer_to_save(save, len_save, buffer, ret);
	return 0;
}

int process_line(char **save, size_t *len_save, char **line)
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

int get_next_line(int const fd, char **line)
{
	static char		*save = NULL;
	static size_t	save_size = 0;
	char			buffer[BUFF_SIZE + 1];
	int				ret;
	size_t			len_save;

	if (check_params(fd, line) == -1)
		return (-1);
	*line = NULL;
	len_save = save ? ft_strlen(save) : 0;
	while (1)
	{
		ret = process_line(&save, &len_save, line);
		if (ret != 0)
			return ret;
		ret = read_data(fd, buffer);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			break;
		if (process_buffer(&save, &len_save, buffer, ret, &save_size) == -1)
			return (-1);
	}
	if (handle_remaining_data(&save, line, len_save))
		return (1);
	if (save)
	{
		free(save);
		save = NULL;
		save_size = 0;
	}
	return (0);
}
