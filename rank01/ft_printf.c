/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:35:15 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/16 19:15:36 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_next_letter(char c, va_list *args)
{
	if (c == 'c')
	{
		ft_putchar_fd((va_arg(*args, int)), 1);
	}
		
}

int	ft_printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			check_next_letter(format[i + 1], &args);
			i++;
		}
		write(1,&format[i], 1);
		i++;
	}
	return (0);
}
