/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:53:45 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 18:13:17 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tester.h>

void	sort(int ac, char **av)
{
	if (!ft_strcmp(av[1], "ft_is"))
		test_ft_is(ac - 2, av + 2);
	else if (!ft_strcmp(av[1], "ft_mem"))
		test_ft_mem(ac - 2, av + 2);
	else if (!ft_strcmp(av[1], "ft_print"))
		test_ft_print(ac - 2, av + 2);
	else if (!ft_strcmp(av[1], "ft_string"))
		test_ft_string(ac - 2, av + 2);
	else if (!ft_strcmp(av[1], "ft_type"))
		test_ft_type(ac - 2, av + 2);
	else if (!ft_strcmp(av[1], "get_next_line"))
		test_gnl(ac - 2, av + 2);
	else
		ft_putstr("unknown group\n");
}

void	hint(void)
{
	ft_putstr("usage\t: ./name group args ...\n");
	ft_putstr("groups available :\n");
	ft_putstr("ft_is ft_mem ft_print");
	ft_putstr(" ft_string ft_type get_next_line\n");
}

int	main(int ac, char **av)
{
	if (ac < 2)
		hint();
	else
		sort(ac, av);
	return (0);
}
