NAME := libftprintf.a
SRCS := ft_printf.c utils.c
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft
	cp libft/libft.a $(NAME)
	cc -Wall -Werror -Wextra -c $(SRCS)
	ar -crs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean $(NAME)

.PHONY: all clean fclean re
