#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd = open("./test.txt", O_RDWR);
	char buffer[42];
	ssize_t bytes_read = read(fd, buffer , 6);
	buffer[bytes_read] = '\0';
	write(1, buffer, bytes_read);
}
