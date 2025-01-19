/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:11:05 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/17 18:08:01 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tester.h>

void	testft_strjoin(void)
{
	char *s1 = "bonjour";
	char *s2 = " au revoir";
	char *res = NULL;

	res = ft_strjoin(s1, s2);
	ft_putendl(res);
	free(res);
}

void	test_ft_string(void)
{
	testft_strjoin();
}
