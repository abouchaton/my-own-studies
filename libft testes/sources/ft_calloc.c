/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchat <abouchat@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:02:43 by abouchat          #+#    #+#             */
/*   Updated: 2024/09/26 23:02:43 by abouchat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*ptr;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	ptr = malloc(sizeof(size) * nmemb);
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)ft_calloc(5, 1);
	ptr2 = (char *)calloc(0, 2);

	if(!ptr1)
		write(1, "ptr1 NULL", 10);
	if(!ptr2)
	{
		write(1, "ptr2 NULL", 10);
	}
	if(ptr1 && ptr2)
	{
	write(1, ptr1, 5);
	write(1, "\n", 1);
	write(1, ptr2, 5);
	}
}*/