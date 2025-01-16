/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:41:18 by cglavieu          #+#    #+#             */
/*   Updated: 2025/01/16 10:15:50 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 255

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strcat(char *dest, const char *src)
{
	char	*ret = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*(dest++) = *(src++);
	*dest = '\0';
	return (ret);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ret = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}

size_t	ft_strlen(const char *s)
{
	size_t	i = 0;

	while (*(s++) != '\0')
		i++;
	return (i);
}

char	*initStr(void)
{
	char		*str;

	str = (char *)malloc(sizeof(char));
	*str = '\0';
	return (str);
}

char	*readInFile(int fd, int *ret)
{
	static char	buffer[BUFF_SIZE + 1];

	*ret = read(fd, buffer, BUFF_SIZE);
	if (*ret != -1)
		buffer[*ret] = '\0';
	return (buffer);
}

char	*catall(char *tmp, char *buffer)
{
	size_t		len = 1;
	char		*cat;

	len = len + ft_strlen(tmp);
	len = len + ft_strlen(buffer);
	cat = (char *)malloc(sizeof(char) * len);
	cat = ft_strcpy(cat, tmp);
	cat = ft_strcat(tmp, buffer);
	free(tmp);
	return (cat);
}

int		get_next_line(int const fd, char **line)
{
	char			*buffer;
	static char	*str = NULL;
	char		*tmp = NULL;
	int			ret = 1;

	if (tmp == NULL)
		tmp = initStr();
	if (BUFF_SIZE < 1 || line == NULL)
		return (-1);
	do
	{
		buffer = readInFile(fd, &ret);
		if (ret == -1)
			return (-1);
		tmp = catall(tmp, buffer);
	}
	while ((ft_strchr(str, '\n') == NULL) && ret > 0);
	*line = tmp;
	if (ret == 0 || buffer[ret] == '\0')
		return (0);
	str = &buffer[ret + 1];
	return (1);
}
