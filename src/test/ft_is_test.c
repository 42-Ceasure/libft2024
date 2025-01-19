/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:09:15 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/17 16:50:31 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tester.h>

void	testft_isalnum(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isalnum:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isalnum, isalnum, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isalpha(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isalpha:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isalpha, isalpha, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isascii(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isascii:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isascii, isascii, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isblank(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isblank:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isblank, isblank, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_iscntrl(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing iscntrl:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_iscntrl, iscntrl, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isdigit(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isdigit:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isdigit, isdigit, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isgraph(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isgraph:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isgraph, isgraph, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_islower(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing islower:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_islower, islower, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isprint(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isprint:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isprint, isprint, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_ispunct(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing ispunct:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_ispunct, ispunct, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isspace(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isspace:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isspace, isspace, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isupper(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isupper:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isupper, isupper, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	testft_isxdigit(void)
{
	int	i = -1;
	int	errorcount = 0;

	printf("testing isxdigit:");
	while (i < 129)
	{
		errorcount += powertest_is(ft_isxdigit, isxdigit, i);
		i++;
	}
	printf("errorcount:%d\n", errorcount);
}

void	test_ft_is(void)
{
	testft_isalnum();
	testft_isalpha();
	testft_isascii();
	testft_isblank();
	testft_iscntrl();
	testft_isdigit();
	testft_isgraph();
	testft_islower();
	testft_isprint();
	testft_ispunct();
	testft_isspace();
	testft_isupper();
	testft_isxdigit();
}
