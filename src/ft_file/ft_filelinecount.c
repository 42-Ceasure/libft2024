/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelinecount.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:24:37 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/22 08:33:20 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_file.h>

int	ft_filelinecount(char *path)
{
	int		fd;
	int		ret;
	char	buffer[BUFF_SIZE + 1];
	size_t	line_count;

	line_count = 0;
	fd = ft_fileopenr(path);
	if (fd == -1)
	{
		printf("Error opening file.\n");
		return (-1);
	}
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		line_count += ft_strccount(buffer, '\n');
	}
	if (ret == -1)
	{
		printf("Error reading file.\n");
		line_count = -1;
	}
	close(fd);
	return (line_count);
}
