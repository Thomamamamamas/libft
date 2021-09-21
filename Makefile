NAME="libft.a"
SRCS="srcs/*.c"

all : $(NAME):

$(NAME): 
	gcc -c *.c

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
