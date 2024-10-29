#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	
	// %c char conversion
	char c = 'a';

	printf("---%%c char conversion---\n");
	printf("%d\n", printf("%c\n", c));
	ft_printf("%d\n", ft_printf("%c\n", c));
	write(1, "\n", 1);

	printf("---%%c char conversion with + 256---\n");
	printf("%d\n", printf("%c\n", c + 256));
	ft_printf("%d\n", ft_printf("%c\n", c + 256));
	write(1, "\n", 1);

	// %s string conversion
	char *s = NULL;

	printf("---%%s string conversion with NULL---\n");
	printf("%d\n", printf("%s\n", s));
	ft_printf("%d\n", ft_printf("%s\n", s));
	write(1, "\n", 1);

	s = "salve";
	printf("---%%s string conversion with string---\n");
	printf("%d\n", printf("%s\n", s));
	ft_printf("%d\n", ft_printf("%s\n", s));
	write(1, "\n", 1);
	
	s = "";
	printf("---%%s string conversion with empty string---\n");
	printf("%d\n", printf("%s\n", s));
	ft_printf("%d\n", ft_printf("%s\n", s));	
	write(1, "\n", 1);

	//%p pointer address conversion
	void *addr = NULL;

	printf("---%%p pointer conversion with NULL---\n");
	printf("%d\n", printf("%p\n", addr));
	ft_printf("%d\n", ft_printf("%p\n", addr));
	write(1, "\n", 1);

	//printf("%d\n", printf("%p %p\n", 15, 15));
	ft_printf("%d\n", ft_printf("%p %p\n", ULONG_MAX, -ULONG_MAX));
	write(1, "\n", 1);

	addr = &c;

	printf("---%%p pointer conversion with address of a char---\n");
	printf("%d\n", printf("%p\n", addr));
	ft_printf("%d\n", ft_printf("%p\n", addr));
	write(1, "\n", 1);

	void **addr2 = (void *)&s;

	printf("---%%p pointer conversion with address of void**---\n");
	printf("%d\n", printf("%p\n", addr2));
	ft_printf("%d\n", ft_printf("%p\n", addr2));
	write(1, "\n", 1);

	// %d and &i integer conversion
	int n = 0;

	printf("---%%d and %%i conversions of int i = 0---\n");
	printf("%d\n", printf("%d\n", n));
	ft_printf("%d\n", ft_printf("%d\n", n));
	write(1, "\n", 1);

	printf("%d\n", printf("%i\n", n));
	ft_printf("%d\n", ft_printf("%i\n", n));
	write(1, "\n", 1);

	n = 2147483647;

	printf("---%%d and %%i conversions of int max---\n");
	printf("%d\n", printf("%d\n", n));
	ft_printf("%d\n", ft_printf("%d\n", n));
	write(1, "\n", 1);

	printf("%d\n", printf("%i\n", n));
	ft_printf("%d\n", ft_printf("%i\n", n));
	write(1, "\n", 1);

	n = -2147483648;

	printf("---%%d and %%i conversions of int min---\n");
	printf("%d\n", printf("%d\n", n));
	ft_printf("%d\n", ft_printf("%d\n", n));
	write(1, "\n", 1);

	printf("%d\n", printf("%i\n", n));
	ft_printf("%d\n", ft_printf("%i\n", n));
	write(1, "\n", 1);

	n = 2147483648;

	printf("---%%d and %%i conversions with int max + 1---\n");
	printf("%d\n", printf("%d\n", n));
	ft_printf("%d\n", ft_printf("%d\n", n));
	write(1, "\n", 1);

	printf("%d\n", printf("%i\n", n));
	ft_printf("%d\n", ft_printf("%i\n", n));
	write(1, "\n", 1);

	// %% percentage sign conversion
	printf("---percentage sign conversion---\n");
	printf("%d\n", printf("%%%%%%%%%%\n"));
	ft_printf("%d\n", ft_printf("%%%%%%%%%%\n"));
	write(1, "\n", 1);

	printf("%d\n", printf("salve%%tropa%%\n"));
	ft_printf("%d\n", ft_printf("salve%%tropa%%\n"));
	write(1, "\n", 1);

	// %u, %x and %X unsigned int and hexadecimal conversion
	unsigned int u = (unsigned long int)addr;

	printf("---%%u, %%x and %%X conversions with address of char c---\n");
	printf("%d\n", printf("%x\n", u));
	ft_printf("%d\n", ft_printf("%x\n", u));
	write(1, "\n", 1);

	printf("%d\n", printf("%X\n", u));
	ft_printf("%d\n", ft_printf("%X\n", u));
	write(1, "\n", 1);

	printf("%d\n", printf("%u\n", u));
	ft_printf("%d\n", ft_printf("%u\n", u));
	write(1, "\n", 1);

}
