/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:57:33 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/22 18:05:19 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int   ft_strchr(const char *s, int c);
char  *ft_strjoin(const char *s1, const char *s2);
char  *ft_strdup(const char *s);
size_t  ft_strlen(const char *s);
char  *ft_substr(char const  *s, unsigned int start, size_t len);

#endif
