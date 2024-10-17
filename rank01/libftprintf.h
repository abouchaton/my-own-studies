/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:00:41 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/17 19:51:38 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int    check_next_letter(char c, va_list args);

int		ft_num_len(long n, int base);

int		ft_putchar_args(int c);

int		ft_putstr_args(char *str);

int		ft_putnbr_args(int n);

int		ft_print_hex_args(unsigned long n, int base_case);

void	ft_puthex(unsigned long num, char *base);

int		ft_putaddr_args(void *addr);

void	ft_put_unsigned(unsigned int n);

int		ft_putunsign_args(unsigned int n);

#endif
