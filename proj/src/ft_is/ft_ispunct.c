/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:25:26 by cglavieu          #+#    #+#             */
/*   Updated: 2024/12/26 10:22:17 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_is.h>

int	ft_ispunct(int c)
{
	return (!ft_isalnum(c) && c > SPACE && c < DELCHAR);
}
