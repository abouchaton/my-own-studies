#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
int	main(void)
{
	int fd = open("teste", O_RDONLY);
	int i = 0;

	while (i < 5)
	{
		printf("linha %d : %s\n", i + 1, get_next_line(fd));
		i++;
	}
}
