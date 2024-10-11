/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:41:34 by abouchat          #+#    #+#             */
/*   Updated: 2024/09/25 12:32:49 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dst[len] != '\0')
		len++;
	while (src[i] != '\0' && i < size - 1)
	{
		if ((len + i) < size - 1)
			dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return ((len + i) * sizeof(char));
}
/*
int	main(void)
{
	char	dest1[50] = "I'm gonna take ";
	char	src1[50] = "";
	char	dest2[50] = "I'm gonna take ";
	char	src2[50] = "";

	printf("%ld\n", ft_strlcat(dest1, src1, 40));
	printf("%s\n", dest1);
	printf("%ld\n", strlcat(dest2, src2, 40));
	printf("%s\n", dest2);

}*/