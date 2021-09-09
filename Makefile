NAME = test
SRC = ft_putnbr.c

all : $(NAME):

$(NAME): 
	gcc -o $(NAME) $(SRC)

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
