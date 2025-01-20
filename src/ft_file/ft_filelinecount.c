/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelinecount.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:24:37 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/20 11:43:53 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_file.h>

int		ft_filelinecount(char *path)
{
	int		fd;
	int		ret;
	char	buffer[BUFFER_S + 1];
	size_t	line_count;

	fd = open(path, O_RDONLY);
	line_count = 0;
	if (fd == -1)
		return (-1);
	while ((ret = read(fd, buffer, BUFFER_S)))
	{
		if (ret == -1)
			return (-1);
		buffer[ret] = '\0';
		line_count += ft_strccount(buffer, '\n');
	}
	close (fd);
	return (line_count);
}
