NAME    =       libft.a
CFLAGS  =        -Wall -Wextra -Werror
CC      = gcc
HEADER  = includes
OBJ     =       ${SRC:.c=.o}
	SRC     =        srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
	 
.c.o:   $(SRC)
	                $(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HEADER)
					 
all:    $(NAME)
	 
$(NAME): $(OBJ)
	                ar rc $(NAME) $(OBJ)
					                ranlib $(NAME)
									 
clean:
	                rm -f $(OBJ)
					 
fclean: clean
	                rm -f $(NAME)
					 
re: fclean all
	 
.PHONY : all clean fclean re
