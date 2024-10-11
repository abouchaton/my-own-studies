/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:04:30 by abouchat          #+#    #+#             */
/*   Updated: 2024/09/30 11:47:40 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	unsigned
		char *str;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = c;
	return (s);
}
