/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:47:25 by abouchat          #+#    #+#             */
/*   Updated: 2024/09/26 22:47:25 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(s));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	src[10] = "";

	str1 = ft_strdup(src);
	str2 = strdup(src);
	write(1, str1, 6);
	write(1, "\n", 1);
	write(1, str2, 6);
}*/