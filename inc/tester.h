/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:15:54 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/17 18:58:16 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# include <libft.h>
# include <ctype.h>
# include <stdio.h>
# include <fcntl.h>

int		powertest_is(int (*ftptr)(int), int (*rlftptr)(int), int c);

void	test_ft_is(void);
void	test_ft_mem(void);
void	test_ft_print(void);
void	test_ft_string(void);
void	test_ft_type(void);
void	test_gnl(int ac, char **av);

void	testft_bzero(void);
void	testft_calloc(void);
void	testft_memccpy(void);
void	testft_memchr(void);
void	testft_memset(void);

#endif