CC      =       gcc

RM      =       rm -f

NAME    =       my_hunter

SRCS    =	main.c \
		display.c \
		duck.c \
		print.c \
		sprite.c \
		openndreadfile.c \
		chocobo.c \
		RRduck.c \
		./my_printf/cast.c \
		./my_printf/count.c \
		./my_printf/flag-lpu.c \
		./my_printf/flag-S%.c \
		./my_printf/honte.c \
		./my_printf/litle_func.c \
		./my_printf/my_printf.c \
		./my_printf/my_put_nbr_bases.c \
		./my_printf/put_nbr_deci.c

OBJS    =       $(SRCS:.c=.o)

all:            $(NAME)

$(NAME):        $(OBJS)
		$(CC) $(OBJS) -o $(NAME) -lc_graph_prog
		$(RM) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
