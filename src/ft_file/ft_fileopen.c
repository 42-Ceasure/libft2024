/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fileopen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:31:47 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/20 11:56:05 by cglavieu         ###   ########.fr       */
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

int		ft_fileopenrw(char *path)
{
	return (open(path, O_RDWR));
}

int		ft_fileopen(char *path, char *mode)
{
	if (!ft_strcmp(mode, "r"))
		return (ft_fileopenr(path));
	else if (!ft_strcmp(mode, "w"))
		return (ft_fileopenw(path));
	else if (!ft_strcmp(mode, "rw"))
		return (ft_fileopenrw(path));
	return (-1);
}
