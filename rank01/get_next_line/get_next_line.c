/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:56:52 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/29 19:53:08 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char	*out;
	size_t	bytes_read;
	char	*buf;
  char  *aux;
  unsigned int index;

	if (!stash)
	{
		out = ft_strdup("");
	}
  else 
  {
    out = ft_strdup(stash);
  }
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (ft_strchr(buf, '\n') == -1)
		{
      aux = out;
      out = ft_strjoin(buf, out);
		}
		else
		{
      index = ft_strchr(buf, '\n');
      stash = ft_substr(buf, index + 1, (ft_strlen(buf) - (index + 1)));
      aux = ft_substr(buf, 0, index);
      out = ft_strdup(aux);
		}
    free(aux);
    aux = NULL;
	}
  free(buf);
  return (out);
}
