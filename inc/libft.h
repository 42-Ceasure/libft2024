/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 07:52:18 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/21 18:59:31 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ft_file.h>
# include <ft_is.h>
# include <ft_mem.h>
# include <ft_print.h>
# include <ft_string.h>
# include <ft_type.h>
# include <stdio.h>

#define BUFF_SIZE (getpagesize() - 1)

int		get_next_line(int const fd, char **line);

#endif
