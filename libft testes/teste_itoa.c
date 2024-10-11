#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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

char	*ft_itoa(int n)
{
	int		n_len;
	//int		i;
	char	*num;

	//i = 0;
	n_len = num_len(n);
	if (n < 0)
	{
		num = (char *)malloc(sizeof(char) * n_len + 2);
		num[0] = '-';
		n = n * (-1);
	}
	else if (n >= 0)
		num = (char *)malloc(sizeof(char) * n_len + 1);
	if (!num)
		return (NULL);
	while (n_len > 0)
	{
		num[n_len - 1] = '0' + (n % 10);
		n = n / 10;
		n_len--;
	}
	return (num);
}

int	main(void)
{
	char *num = ft_itoa(-25);

	write(1, num, 2);
}