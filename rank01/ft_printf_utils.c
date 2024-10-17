/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:43:40 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/17 19:50:14 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
int	ft_putchar_args(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_args(char *str)
{
	int	len;
	
	len = ft_strlen(str);
	while (*str)
	{
		write(1, str++, 1);
	}
	return (len);
}

int	ft_putnbr_args(int n)
{
	int	len;

	len = ft_num_len(n, 10);
	ft_putnbr_fd(n, 1);
	return (len);
}

int	ft_print_hex_args(unsigned long n, int base_case)
{
	char *base;
	int	len;

	len = ft_num_len(n, 16);
	if (base_case == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ACBDEF";
	ft_puthex(n, base);
	return (len);
}
