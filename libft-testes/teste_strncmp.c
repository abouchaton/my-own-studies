#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(const char *s1,const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

int	main(void)
{
	printf("Diferença com strncmp: %d\n", strncmp("I'm gonna take you for a ride!", "We're gonna take you for a ride!", 10));
	printf("Diferença com ft_strncmp: %d\n", ft_strncmp("I'm gonna take you for a ride!", "We're gonna take you for a ride!", 10));

}