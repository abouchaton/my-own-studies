#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	while (i <= len)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*char_found1;
	char	*char_found2;

	char_found1 = strchr("esalve", '\0');
	char_found2 = ft_strchr("esalve", '\0');

	if (char_found1 == NULL)
		write(1, "char_found1 is NULL\n", 21);
	if (char_found2 == NULL)
		write(1, "char_found2 is NULL\n", 21);

	if (char_found1 != NULL)
	{
		write(1, char_found1, 1);
		printf("\n%p\n", char_found1);
	}
	if (char_found2 != NULL)
	{
		write(1, char_found2, 1);
		printf("\n%p\n", char_found2);
	}
}
