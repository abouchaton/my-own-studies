#include "libft.h"


int	main(void)
{
#include <stdio.h>
	char	*str_found;

	str_found = ft_strnstr("I'm gonna take you for ride!", "you", 10);

	if (str_found == NULL)
		printf("No substring was found.");
	else
		printf("%s", str_found);
}
