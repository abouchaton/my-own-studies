/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:54:34 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/01 16:19:51 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// static void	next_char(unsigned int i, char *s)
// {
// 	s[i] = s[i] + 1;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		f(i++, s);
}

// int	main(void)
// {
// 	char str[10] = "abc";

// 	write(1, str, 3);
// 	write(1, "\n", 1);
// 	ft_striteri(str, next_char);
// 	write(1, str, 3);
// }