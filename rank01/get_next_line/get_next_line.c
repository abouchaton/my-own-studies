/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:56:52 by abouchat          #+#    #+#             */
/*   Updated: 2024/11/12 15:36:11 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

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

static char	*stash_check(char **stash, int *index, char *out)
{
	char  *aux;
  	char  *bef_stash;
	
	aux = NULL;
	printf("\nstash no momento: %s\n", *stash);
	if (!*stash)
	{
		out = ft_strdup("");
	}
	else if (ft_strchr(*stash, '\n') == -1)
	{
		aux = out;
		out = ft_strdup(*stash);
	}
	else if ((ft_strchr(*stash, '\n') >= 0) || (ft_strchr(*stash, '\0') >= 0))
	{
		*index = ft_strchr(*stash, '\n');
		*index = (unsigned int)*index;
		bef_stash = ft_substr(*stash, 0, *index + 1);
    	aux = *stash;
		*stash = ft_substr(*stash, *index + 1, (ft_strlen(*stash) - (*index + 1)));
		out = ft_strdup(bef_stash);
		free_func(&bef_stash, NULL, NULL);
	}
	free_func(&aux, NULL, NULL);
	return (out);
}

static char	*buf_check(char *buf, char *out, int *index, char **stash, size_t bytes_read)
{
	char	*aux;
	char	*bef_stash;

	if (bytes_read == 0)
		return (out);
	else if (ft_strchr(buf, '\n') == -1)
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
	char	*out;
	size_t	bytes_read;
	char	*buf;
	int index;
  
	if (!(fd >= 0 && fd <= 1024) || BUFFER_SIZE == 0)
		return (NULL);
	index = -1;
	out = NULL;
	out = stash_check(&stash, &index, out);
	buf = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (index == -1)
  	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
			{
				free_func(&out, &buf,  NULL);
				return (NULL);
			}
		out = buf_check(buf, out, &index, &stash, bytes_read);
  	}
	while (bytes_read == BUFFER_SIZE && index == -1)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
    	buf[bytes_read] = '\0';
		out = buf_check(buf, out, &index, &stash, bytes_read);
	}
	free_func(&buf, NULL, NULL);
	return (out);
}
