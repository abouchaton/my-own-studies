#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <string.h>

void	test_bzero_1()
{
	//1
	char	str1[10] = "salve";
	printf("\nstr1 antes: %s\n esperado:\n", str1);
	bzero(str1, 5);
	write(1, str1, strlen(str1));
	write(1, "\n\n", 2);

	char	str2[10] = "salve";
	printf("str2 antes: %s\n proprio:\n", str2);
	ft_bzero(str2, strlen(str2));
	write(1, str2, strlen(str2));
	write(1, "\n\n", 2);
}

void	test_bzero_2()
{
	//2
	char str1[10] = "";
	printf("\nstr1 antes: %s\n esperado:\n", str1);
	bzero(str1, strlen(str1));
	write(1, str1, strlen(str1));
	write(1, "\n\n", 2);

	char str2[10] = "";
	printf("str2 antes: %s\n proprio:\n", str2);
	ft_bzero(str2, strlen(str2));
	write(1, str2, strlen(str2));
	write(1, "\n\n", 2);
}

void	test_bzero_3()
{
	//3
	char str1[10] = "salve";
	printf("\nstr1 antes: %s\n esperado:\n", str1);
	bzero(str1, 2);
	write(1, str1, strlen(str1));
	write(1, "\n\n", 2);


	char str2[10] = "salve";
	printf("str2 antes: %s\n proprio:\n", str2);
	ft_bzero(str2, 2);
	write(1, str2, strlen(str2));
	write(1, "\n\n", 2);
}

void	test_bzero_4()
{
	//4
	char	str1[10] = "salve";
	printf("\nstr1 antes: %s\n esperado:\n", str1);
	bzero(str1 + 2, 2);
	write(1, str1, strlen(str1));
	write(1, "\n\n", 2);

	char str2[10] = "salve";
	printf("str2 antes: %s\n proprio:\n", str2);
	ft_bzero(str2 + 2, 2);
	write(1, str2, strlen(str2));
	write(1, "\n\n", 2);
}

int	main(void)
{
	test_bzero_1();
	test_bzero_2();
	test_bzero_3();
	test_bzero_4();
}
