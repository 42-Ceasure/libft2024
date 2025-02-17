/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_manage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:30:14 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 11:49:22 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int	handle_remaining_data(char **save, char **line, size_t len_save)
{
	if (len_save > 0)
	{
		*line = *save;
		*save = NULL;
		return (1);
	}
	return (0);
}

int	process_remaining_data(t_svg *svg, char **line)
{
	if (handle_remaining_data(&svg->save, line, svg->len_save))
		return (1);
	if (svg->save)
	{
		free(svg->save);
		svg->save = NULL;
		svg->save_size = 0;
	}
	return (0);
}

void	update_save(char **save, size_t line_len, size_t *len_save)
{
	*len_save -= (line_len);
	ft_memmove(*save, *save + line_len, *len_save);
	(*save)[*len_save] = '\0';
}

void	append_buffer_to_save(t_svg *svg, char *buffer, size_t ret)
{
	ft_memcpy(svg->save + svg->len_save, buffer, ret);
	svg->len_save += ret;
	svg->save[svg->len_save] = '\0';
}

size_t	save_len(char *save)
{
	if (save)
		return (ft_strlen(save));
	else
		return (0);
}
