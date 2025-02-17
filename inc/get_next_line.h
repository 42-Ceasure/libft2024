/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:17:02 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 12:10:07 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <unistd.h>
# include <ft_mem.h>
# include <ft_string.h>

# define BUFF_SIZE 4095

typedef struct s_svg
{
	char	*save;
	size_t	save_size;
	size_t	len_save;
}				t_svg;

int		realloc_save(t_svg *svg, size_t ret);
char	*allocate_line(char *save, size_t line_len);

int		read_data(int fd, char *buffer);
int		process_buffer(t_svg *svg, char *buffer, size_t ret);

char	*find_newline(char *save, size_t len_save);
int		process_line(char **save, size_t *len_save, char **line);

int		handle_remaining_data(char **save, char **line, size_t len_save);
int		process_remaining_data(t_svg *svg, char **line);
void	update_save(char **save, size_t line_len, size_t *len_save);
void	append_buffer_to_save(t_svg *svg, char *buffer, size_t ret);
size_t	save_len(char *save);

int		get_next_line(int const fd, char **line);

#endif