#include <unistd.h>
#include <stdlib.h>

static char	next_char(unsigned int i, char c)
{
	c = c + i;
	return (c);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char str[10] = "abc";
	char	*str2;

	write(1, str, 3);
	write(1, "\n", 1);
	str2 = ft_strmapi(str, next_char);
	write(1, str2, 4);
}