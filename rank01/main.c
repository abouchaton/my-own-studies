#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	unsigned int a = -1;
	printf("%d\n", printf("%x\n", a));
	ft_printf("%d\n", ft_printf("%x\n", a));
}
