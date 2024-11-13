/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:38:58 by abouchat          #+#    #+#             */
/*   Updated: 2024/11/13 18:33:54 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	free_func(char **ptr1, char **ptr2, char **ptr3)
{
	if (ptr1)
	{
		free(*ptr1);
		*ptr1 =  NULL;
	}
	if (ptr2)
	{
		free(*ptr2);
		*ptr2 =  NULL;
	}
	if (ptr3)
	{
		free(*ptr3);
		*ptr3 =  NULL;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (nmemb > 9223372036854775807 || size > 9223372036854775807)
		return (NULL);
	ptr = (unsigned char *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
		ptr[i++] = 0;
	return ((void *)ptr);
}

static char	*buf_check(char *out, char *buf, int *index, char **stash)
{
	char	*aux;
	char	*bef_stash;

	if (ft_strchr(buf, '\n') == -1)
	{
		aux = out;
		out = ft_strjoin(out, buf);
	}
	else
	{
		*index = (unsigned int)*index;
		*index = ft_strchr(buf, '\n');
		aux = *stash;
		*stash = ft_substr(buf, *index + 1, (ft_strlen(buf) - (*index + 1)));
		free(aux);
		bef_stash = ft_substr(buf, 0, *index + 1);
		aux = out;
		out = ft_strjoin(out, bef_stash);
		free_func(&bef_stash, NULL, NULL);
	}
	free_func(&aux, NULL, NULL);
	return (out);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*out;
	size_t		bytes_read;
	char		*buf;
	int			index;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	index = -1;
	if (!stash)
		out = ft_strdup("");
	bytes_read = 1;
	buf = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	while (bytes_read > 0 && index == -1)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		buf[bytes_read] = '\0';
		if (bytes_read > 0)
			out = buf_check(out, buf, &index, &stash);
	}
	return (out);
}
