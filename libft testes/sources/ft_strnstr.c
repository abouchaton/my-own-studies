/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:57:33 by abouchat          #+#    #+#             */
/*   Updated: 2024/09/24 16:23:01 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (little[0] == '\0')
		return ((char *)big);
	little_len = 0;
	i = 0;
	while (little[little_len] != '\0')
		little_len++;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (j == (little_len - 1))
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
