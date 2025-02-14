/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:24:59 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/22 19:57:53 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <ft_string.h>
# include <libft.h>

int		ft_filelinecount(char *path);
int		ft_fileopenr(char *path);
int		ft_fileopenw(char *path);
int		ft_fileopenrwc(char *path);
int		ft_fileopen(char *path, char *mode);

#endif