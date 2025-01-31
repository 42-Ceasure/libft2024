/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fileopen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:31:47 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/31 17:01:21 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_file.h>

int		ft_fileopenr(char *path)
{
	return (open(path, O_RDONLY));
}

int		ft_fileopenw(char *path)
{
	return (open(path, O_WRONLY));
}

int		ft_fileopenrwc(char *path)
{
	int	fd;

	fd = open(path, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		perror("Error opening or creating file");
	return (fd);
}

int		ft_fileopen(char *path, char *mode)
{
	if (!ft_strcmp(mode, "r"))
		return (ft_fileopenr(path));
	else if (!ft_strcmp(mode, "w"))
		return (ft_fileopenw(path));
	else if (!ft_strcmp(mode, "rw"))
		return (ft_fileopenrwc(path));
	return (-1);
}
