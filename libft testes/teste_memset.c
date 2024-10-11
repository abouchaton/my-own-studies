#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char	str1[5] = "12345";
	char	str2[5] = "12345";

	ft_memmove(str1, str1 - 2, 3);
	memmove(str2, str2 - 2, 3);

	write(1, str1, 5);
	write(1, "\n", 1);
	write(1, str2, 5);


}