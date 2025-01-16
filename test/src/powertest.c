/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powertest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:26:01 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 20:09:00 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tester.h>

void	powertest_is(int (*ftptr)(int), int (*rlftptr)(int), char *name, int c)
{
	int	user;
	int	real;

	user = ftptr(c);
	real = rlftptr(c);
	ft_putstr("testing ");
	ft_putstr(name);
	ft_putstr(" : ");
	if (user == real)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
