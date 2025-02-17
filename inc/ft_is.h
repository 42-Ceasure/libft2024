/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:15:25 by cglavieu          #+#    #+#             */
/*   Updated: 2025/02/17 07:33:46 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# define DEL	127

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isvaliddbl(const char *str);
int		ft_isvalidint(const char *str);
int		ft_isxdigit(int c);

#endif
