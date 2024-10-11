/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:35:30 by abouchat          #+#    #+#             */
/*   Updated: 2024/10/01 15:30:04 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_len(int n)
{
	int	i;
	int	len;

	i = n;
	len = 0;
	if (n == 0)
		return (1);
	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

static void	ft_attribute(int n_len, int n, char *num)
{
	int	i;

	i = n_len - 1;
	while (n != 0)
	{
		num[i--] = '0' + (n % 10);
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		n_len;
	char	*num;

	n_len = num_len(n);
	if (n < 0)
	{
		n_len = n_len + 1;
		num = (char *)malloc(sizeof(char) * n_len + 1);
		num[0] = '-';
		n = n * (-1);
	}
	else
		num = (char *)malloc(sizeof(char) * n_len + 1);
	if (!num)
		return (NULL);
	if (n == 0)
		num[0] = '0';
	else
		ft_attribute(n_len, n, num);
	num[n_len] = '\0';
	return (num);
}
/*
int	main(void)
{
	char *num = ft_itoa(25);

	write(1, num, 2);
}*/