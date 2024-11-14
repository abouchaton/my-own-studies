#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
  //int fd = open("41_with_nl", O_RDONLY);
  char *line;

  for(int i = 0; i < 10; i++)
    {
      line = get_next_line(1000);
      printf("linha %d: %s\n", i + 1, line);
    free(line);
    line = NULL;
    }
}
