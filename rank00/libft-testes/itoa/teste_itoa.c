#include "libft.h"
#include <stdio.h>

void	itoa_res(long int n)
{
	char *num = ft_itoa(n);
	printf("\nresultado: '%s'\n", num);
}

void	test_itoa(long int n)
{
	itoa_res(n);
	printf("esperado: %ld \n", n);
}

int	main(void)
{
	write(1, "----1----\n", 11);
	test_itoa(42);
	write(1,"\n\n", 2);

	write(1, "----2----\n", 11);
	test_itoa(-42);
	write(1,"\n\n", 2);

	write(1, "----3----\n", 11);
	test_itoa(2147483647);
	write(1,"\n\n", 2);

	write(1, "----4----\n", 11);
	test_itoa(-2147483648);
	write(1,"\n\n", 2);

	write(1, "----5----\n", 11);
	test_itoa(0);
	write(1,"\n\n", 2);

	write(1, "----6----\n", 11);
	test_itoa('c');
	write(1,"\n\n", 2);
}