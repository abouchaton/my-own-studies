#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	find_in_set(char *str, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (*str == set[i++])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		s1_len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	s1_len = ft_strlen(s1);
	while (find_in_set((char *)(s1 + i), (char *)set))
		i++;
	while (find_in_set((char *)(s1 + (s1_len - 1)), (char *)set))
		s1_len--;
	str = (char *)malloc(sizeof(char) * (s1_len - i) + 1);
	if (!str)
		return (NULL);
	while (i < s1_len)
		str[j++] = s1[i++];
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	s1[] = "oie";
	char	s2[] = "";
	char	*str_final;

	str_final = ft_strtrim(s1, s2);
	write(1, str_final, (strlen(str_final) + 1));
}