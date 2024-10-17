/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:33:00 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/17 19:51:27 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(unsigned long num, char *base)
{
	char		res;
	if (num >= 16)
		ft_puthex(num / 16, base);
	res = *((num % 16) + base);
	write(1, &res, 1);
}

int	ft_putaddr_args(void *addr)
{
	unsigned long num;
	int	len;

	num = (unsigned long)addr;
	len = ft_num_len(num, 16);
	write(1, "0x", 2);
	ft_puthex(num, "0123456789abcdef");
	return (len + 2);
}

void	ft_put_unsigned(unsigned int n)
{
	unsigned long	nb;
	char		res;

	nb = n;
	if (nb >= 10)
		ft_put_unsigned(nb / 10);
	res = (nb % 10) + '0';
	write(1, &res, 1);
}

int	ft_putunsign_args(unsigned int n)
{
	int	len;

	len = ft_num_len(n, 10);
	ft_put_unsigned(n);
	return (len);
}

