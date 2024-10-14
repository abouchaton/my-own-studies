#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

int	main(void)
{
	char dest1[10] = "abcdefghij";
	char dest2[10] = "abcdefghij";
	char src[10] = "c";

	printf("%ld\n", ft_strlcpy(dest1, src, 3));
	printf("%s\n", dest1);
	printf("%ld\n", strlcpy(dest2, src, 3));
	printf("%s", dest2);

}