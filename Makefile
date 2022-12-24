SRCS	=	ft_printf.c	ft_putnbr_hex.c	ft_putstr.c	ft_putchar.c \
			ft_putnbr.c	ft_putnbr_u.c	ft_strlen.c	ft_putnbr_ptr.c
OBJS    =   $(SRCS:.c=.o)
NAME    =   libftprintf.a
FLAGS   =   -Werror -Wall -Wextra
all: $(NAME)
$(NAME): $(SRCS)
	gcc -c $(FLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(B_OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
bonus: $(B_OBJS)
.PHONY: all fclean re clean
