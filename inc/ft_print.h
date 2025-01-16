/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 08:06:12 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 15:57:17 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include <ft_type.h>
# include <ft_string.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putendl(char *s);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putnbr(int nb);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);

#endif