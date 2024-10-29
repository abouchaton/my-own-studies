#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Resultado esperado: %d\n", atoi("12"));
	printf("Resultado proprio: %d\n", ft_atoi("12"));

	printf("\nResultado esperado: %d\n", atoi("-12"));
	printf("Resultado proprio: %d\n", ft_atoi("-12"));

	printf("\nResultado esperado: %d\n", atoi("0"));
	printf("Resultado proprio: %d\n", ft_atoi("0"));

	printf("\nResultado esperado: %d\n", atoi("-2147483648"));
	printf("Resultado proprio: %d\n", ft_atoi("-2147483648"));

	printf("\nResultado esperado: %d\n", atoi("2147483647"));
	printf("Resultado proprio: %d\n", ft_atoi("2147483647"));

	printf("\nResultado esperado: %d\n", atoi("           -45"));
	printf("Resultado proprio: %d\n", ft_atoi("           -45"));

	printf("\nResultado esperado: %d\n", atoi("      - 45"));
	printf("Resultado proprio: %d\n", ft_atoi("     - 45"));

	printf("\nResultado esperado: %d\n", atoi("123a123"));
	printf("Resultado proprio: %d\n", ft_atoi("123a123"));

	printf("\nResultado esperado: %d\n", atoi("a"));
	printf("Resultado proprio: %d\n", ft_atoi("a"));
}
