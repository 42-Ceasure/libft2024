/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:41:18 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 11:36:40 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int	check_params(int const fd, char **line)
{
	if (!line || fd < 0)
		return (-1);
	return (0);
}

int	get_next_line(int const fd, char **line)
{
	static t_svg	svg = {NULL, 0, 0};
	char			buffer[BUFF_SIZE + 1];
	int				ret;

	if (check_params(fd, line) == -1)
		return (-1);
	*line = NULL;
	svg.len_save = save_len(svg.save);
	while (1)
	{
		ret = process_line(&svg.save, &svg.len_save, line);
		if (ret != 0)
			return (ret);
		ret = read_data(fd, buffer);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			break ;
		if (process_buffer(&svg, buffer, ret) == -1)
			return (-1);
	}
	process_remaining_data(&svg, line);
	return (0);
}
