/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:12:22 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/18 17:29:51 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tester.h>

void	fromfilegnl(char **av)
{
	int		fd;
	char	*line;

	fd = open(av[0], O_RDONLY);
	if (fd != -1)
	{
		while (get_next_line(fd, &line))
		{
			ft_putstr(line);
			usleep(10000);
			free(line);
		}
	}
}

void	stdingnl()
{
	char	*line = NULL;

	while (get_next_line(0, &line))
	{
		if (!ft_strcmp(line, "exit\n"))
		{
			free(line);
			return ;
		}
		ft_putstr(line);
		free(line);
	}
}

void	test_gnl(int ac, char **av)
{
	(void)av;
	// (void)ac;
	// char *line;
	// int fd = open(av[0], O_RDONLY);
	// get_next_line(fd, &line);
	// free(line);
	if (ac == 0)
		stdingnl();
	else
		fromfilegnl(av);
}
