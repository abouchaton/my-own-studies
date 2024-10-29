/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:24:04 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/21 16:33:10 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(long n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		res;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * (-1);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	res = (nb % 10) + '0';
	write(fd, &res, 1);
}
