/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:35:20 by abouchat          #+#    #+#             */
/*   Updated: 2024/09/25 12:33:11 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char dest1[10];
	char dest2[10];
	char src[10] = "salve";

	printf("%ld\n", ft_strlcpy(dest1, src, 3));
	printf("%s\n", dest1);
	printf("%ld\n", strlcpy(dest2, src, 3));
	printf("%s", dest2);

}*/