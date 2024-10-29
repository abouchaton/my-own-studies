#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char str1[10] = "salve";
	char str2[10] = "salve";

	ft_bzero(str1, 6);
	write(1, str1, 6);
	write(1, "\n", 1);
	bzero(str2, 5);
	write(1, str2, 6);
}