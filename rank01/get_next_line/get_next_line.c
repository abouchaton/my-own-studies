/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:56:52 by abouchat          #+#    #+#             */
/*   Updated: 2024/11/06 20:21:19 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	if (!*stash)
	{
		out = ft_strdup("");
	}
	else if (ft_strchr(*stash, '\n') == -1)
	{
		aux = out;
		out = ft_strdup(*stash);
	}
	else
	{
		*index = ft_strchr(*stash, '\n');
		*index = (unsigned int)*index;
		bef_stash = ft_substr(*stash, 0, *index + 1);
    	aux = *stash;
		*stash = ft_substr(*stash, *index + 1, (ft_strlen(*stash) - (*index + 1)));
		out = ft_strdup(bef_stash);
		free(bef_stash);
		bef_stash = NULL;
	}
	free(aux);
	aux = NULL;
	return (out);
}

static char	*buf_check(char *buf, char *out, int *index, char **stash)
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
		free(bef_stash);
		bef_stash = NULL;
	}
	free(aux);
	aux = NULL;
	return (out);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char	*out;
	size_t	bytes_read;
	char	*buf;
	int index;

	index = -1;
	out = NULL;
	out = stash_check(&stash, &index, out);
	buf = (char*)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE && index == -1)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
		{
			free(out);
			out = NULL;
			free(stash);
			stash = NULL;
			break;
		}
		out = buf_check(buf, out, &index, &stash);
	}
	free(buf);
	buf = NULL;
	return (out);
}
