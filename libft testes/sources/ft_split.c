/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:28:11 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/02 19:13:22 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (s[0] == '\0')
		return (0);
	count = 0;
	while (s[i] == c)
		i++;
	if (s[i] != '\0')
		count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_substr(char const *s, char c, int *i)
{
	int		start;
	int		j;
	char	*str;

	start = *i;
	j = 0;
	while (s[*i] != c)
		(*i)++;
	str = (char *)malloc(sizeof(char) * (*i - start) + 1);
	if (!str)
		return (NULL);
	while (s[start] == c)
		start++;
	while (s[start] != c)
		str[j++] = s[start++];
	*i = start + 1;
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	int		arr_len;
	int		arr_i;
	int		i;

	split_arr = (char **)malloc(sizeof(char *) * (count_words(s, c)) + 1);
	arr_len = count_words(s, c);
	arr_i = 0;
	i = 0;
	while (arr_i < arr_len)
	{
		split_arr[arr_i++] = ft_substr(s, c, &i);
	}
	split_arr[arr_len] = NULL;
	return (split_arr);
}

// int	main(void)
// {
// 	char	*str = "1,2,3,4,5,6,7,8910";
// 	char	**arr;

// 	arr = ft_split(str, ',');

// 	for (size_t i = 0; i < 9; i++)
// 	{
// 		if (arr[i] == NULL)
// 			printf("NULL\n");
// 		else
// 			printf("%s\n", arr[i]);
// 	}
// }