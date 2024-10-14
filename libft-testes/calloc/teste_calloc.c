#include "libft.h"
#include <stdio.h>

void	test_calloc_3()
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)ft_calloc(1, 1);
	ptr2 = (char *)calloc(1, 1);

	if(ptr1 == NULL)
		write(1, "ptr1 NULL", 10);
	 if(!ptr2)
	 {
	 	write(1, "ptr2 NULL", 10);
	 }
	if(ptr1 && ptr2)
	{
	write(1, ptr1, 1);
	write(1, "\n", 1);
	write(1, ptr2, 1);
	write(1, "\n", 1);
	}
	free (ptr1);
	free (ptr2);
}

void	test_calloc_2()
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)ft_calloc(0, 0);
	ptr2 = (char *)calloc(0, 0);

	if(ptr1 == NULL)
		write(1, "ptr1 NULL", 10);
	 if(!ptr2)
	 {
	 	write(1, "ptr2 NULL", 10);
	 }
	if(ptr1 && ptr2)
	{
	write(1, ptr1, 1);
	write(1, "\n", 1);
	//write(1, ptr2, 1);
	write(1, "\n", 1);
	free (ptr1);
	free (ptr2);
	}
}
/*
void	test_calloc_1()
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)ft_calloc(-1, -1);
	ptr2 = (char *)calloc(-1, -1);

	if(ptr1 == NULL)
		write(1, "ptr1 NULL", 10);
	 if(!ptr2)
	 {
	 	write(1, "ptr2 NULL", 10);
	 }
	if(ptr1 && ptr2)
	{
	write(1, ptr1, 1);
	write(1, "\n", 1);
	write(1, ptr2, 1);
	write(1, "\n", 1);
	free (ptr1);
	free (ptr2);
	}
}
*/
int	main(void)
{
	//test_calloc_1();
	test_calloc_2();
	test_calloc_3();
}