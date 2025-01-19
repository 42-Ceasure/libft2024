/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powertest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:26:01 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/17 16:51:30 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tester.h>

int		powertest_is(int (*ftptr)(int), int (*rlftptr)(int), int c)
{
	int	user;
	int	real;

	user = ftptr(c);
	real = rlftptr(c);
	if ((user == 0 && real != 0) || (user != 0 && real == 0))
	{
		printf("test:%c,user:%d,real:%d--KO\n", c, user, real);
		return (1);
	}
	// printf("test:%c,user:%d,real:%d--OK\n", c, user, real);
	return (0);
}
