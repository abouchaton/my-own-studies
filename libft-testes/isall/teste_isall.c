#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void test_all(int c)
{
	printf("isalnum esperado: %d\n", isalnum(c));
	printf("isalnum proprio: %d\n", ft_isalnum(c));

	printf("\nisalpha esperado: %d\n", isalpha(c));
	printf("isalpha proprio: %d\n", ft_isalpha(c));

	printf("\nisascii esperado: %d\n", isascii(c));
	printf("isascii proprio: %d\n", ft_isascii(c));

	printf("\nisdigit esperado: %d\n", isdigit(c));
	printf("isdigit proprio: %d\n", ft_isdigit(c));

	printf("\nisprint esperado: %d\n", isprint(c));
	printf("isprint proprio: %d\n", ft_isprint(c));

	printf("\ntoupper esperado: %c\n", toupper(c));
	printf("toupper proprio: %c\n", ft_toupper(c));

	printf("\ntolower esperado: %c\n", tolower(c));
	printf("tolower proprio: %c\n", ft_tolower(c));
}

int	main(void)
{
	write(1, "----1----\n", 11);
	test_all('a');
	write(1, "\n", 1);

	write(1, "----2----\n", 11);
	test_all('2');
	write(1, "\n", 1);

	write(1, "----3----\n", 11);
	test_all('+');
	write(1, "\n", 1);

	write(1, "----4-----\n", 11);
	test_all('\n');
	write(1, "\n", 1);

	write(1, "----5----\n", 11);
	test_all(200);
	write(1, "\n", 1);

	write(1, "----6----\n", 11);
	test_all('Z');
	write(1, "\n", 1);

}