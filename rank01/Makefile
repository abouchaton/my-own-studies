NAME = libftprintf.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror -I
SRC = ft_printf.c ft_printf_utils.c ft_printf_utils2.c 
OBJS := $(SRC:%.c=%.o)
OBJS_BONUS := $(SRC_BONUS:%.c=%.o)
OBJS_ALL = $(OBJS) $(OBJS_BONUS)
LIBFT_PATH = libft/

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	make -s -C $(LIBFT_PATH)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) libft/ -o $@ -c $<

.PHONY: clean
clean:
	rm -f $(OBJS_ALL)
	cd $(LIBFT_PATH) && make clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBFT_PATH) && make fclean

re: clean all
