/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:00:41 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/21 16:34:28 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);

int		check_next_letter(char c, va_list args);

int		ft_num_len(long n, int base);

int		ft_num_len_unsigned(unsigned long n, int base);

int		ft_putchar_args(int c);

int		ft_putstr_args(char *str);

int		ft_putnbr_args(int n);

int		ft_print_hex_args(unsigned long n, int base_case);

void	ft_puthex(unsigned long num, char *base);

int		ft_putaddr_args(void *addr);

void	ft_put_unsigned(unsigned int n);

int		ft_putunsign_args(unsigned int n);

size_t	ft_strlen(const char *s);

void	ft_putnbr_fd(int n, int fd);

#endif
