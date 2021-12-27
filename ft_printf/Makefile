NAME = ft_printf.a

SRCS = ft_print_hexa_lower.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr_u.c \
		ft_print_hexa_upper.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_print_p.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -rcs

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c
		gcc $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)


fclean : clean
		$(RM) $(NAME)

re : fclean all


.PHONY : all clean fclean re