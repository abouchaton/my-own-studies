NAME = libftprintf.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror -I
SRC = ft_printf.c ft_printf_utils.c ft_printf_utils2.c ft_printf_utils3.c
OBJS := $(SRC:%.c=%.o)
OBJS_BONUS := $(SRC_BONUS:%.c=%.o)
OBJS_ALL = $(OBJS) $(OBJS_BONUS)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) libft/ -o $@ -c $<

.PHONY: clean
clean:
	rm -f $(OBJS_ALL)

fclean: clean
	rm -f $(NAME)

re: clean all
