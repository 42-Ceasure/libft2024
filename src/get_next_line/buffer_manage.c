/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_manage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:31:03 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 11:48:58 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int	read_data(int fd, char *buffer)
{
	int	ret;

	ret = read(fd, buffer, BUFF_SIZE);
	if (ret == -1)
		return (-1);
	buffer[ret] = '\0';
	return (ret);
}

int	process_buffer(t_svg *svg, char *buffer, size_t ret)
{
	if (svg->len_save + ret + 1 > svg->save_size)
	{
		if (realloc_save(svg, ret) == -1)
			return (-1);
	}
	append_buffer_to_save(svg, buffer, ret);
	return (0);
}
