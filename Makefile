NAME = test
SRC = ftputchar.c

all : $(NAME):

$(NAME): gcc -o $(NAME) $(SRC)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
