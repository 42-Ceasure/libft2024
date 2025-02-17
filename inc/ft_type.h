/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:46:54 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 12:08:21 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPE_H
# define FT_TYPE_H

# include <ft_is.h>
# include <limits.h>
# include <math.h>

# define MY_DBL_MAX	1.79769e+308

int		ft_atoi(const char *nptr);
char	*ft_itoa(int nb);
double	ft_atof(const char *str);

#endif