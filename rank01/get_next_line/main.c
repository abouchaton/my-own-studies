#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
  int fd = open("teste.txt", O_RDONLY);
  char *line;

  for(int i = 0; i < 10; i++)
    {
      line = get_next_line(fd);
      printf("linha %d: %s\n", i + 1, line);
    }
}
