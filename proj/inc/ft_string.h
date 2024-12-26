/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:36:29 by cglavieu          #+#    #+#             */
/*   Updated: 2024/12/26 08:02:04 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

#include <sys/types.h>
#include <stddef.h>

char	*strcat(char *dest, const char *src);
char	*strchr(const char *s, int c);
int		strcmp(const char *s1, const char *s2);
char	*strcpy(char *dest, const char *src);
char	*strdup(const char *s);
size_t	strlen(const char *s);
char	*strncat(char *dest, const char *src, size_t n);
int		strncmp(const char *s1, const char *s2, size_t n);
char	*strncpy(char *dest, const char *src, size_t n);
char	*strrchr(const char *s, int c);

#endif