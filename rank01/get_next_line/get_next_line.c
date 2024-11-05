/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:56:52 by abouchat          #+#    #+#             */
/*   Updated: 2024/11/05 17:24:27 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char	*out;
	size_t	bytes_read;
	static char	*buf;
	char  *aux;
	int index;

	index = -1;
	if (!stash)
	{
		out = ft_strdup("");
	}
	else if (ft_strchr(stash, '\n') == -1) 
	{
		out = ft_strdup(stash);
		free(stash);
		stash = NULL;
	}
	else
	{
		index = ft_strchr(stash, '\n');
		index = (unsigned int)index;
		aux = ft_substr(stash, 0, index + 1);
		stash = ft_substr(stash, index + 1, (ft_strlen(stash) - (index + 1)));
		out = ft_strdup(aux);
	}
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	buf[BUFFER_SIZE] = '\0';
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE && index == -1)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
			return (NULL);
		if (ft_strchr(buf, '\n') == -1)
		{
			aux = out;
			out = ft_strjoin(out, buf);
		}
		else
		{
			index = (unsigned int)index;
			index = ft_strchr(buf, '\n');
			stash = ft_substr(buf, index + 1, (ft_strlen(buf) - (index + 1)));
			aux = ft_substr(buf, 0, index + 1);
			out = ft_strjoin(out, aux);
		}
		free(aux);
		aux = NULL;
	}
	free(buf);
	buf = NULL;
  return (out);
}
