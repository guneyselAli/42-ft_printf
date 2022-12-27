SRCS	=	ft_printf.c	ft_printnbr_hex.c	ft_printstr.c	ft_printchar.c \
			ft_printnbr.c	ft_printnbr_u.c	ft_strlen.c	ft_printnbr_ptr.c
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
