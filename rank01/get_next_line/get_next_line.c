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

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char	*out;
	size_t	bytes_read;
	char	*buf;

	if (!stash)
	{
		out = ft_strdup("");
	}
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	buffs_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE)
	{
		buffs_read = read(fd, buf, BUFFER_SIZE);
		if (!(ft_strchr(buf, '\n')))
		{
		}
		else
		{
		}
	}
}
