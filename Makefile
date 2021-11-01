NAME	= libft.a

SRCS	= ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_strchr.c \
ft_strdup.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c

OBJS	= ${SRCS:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}

HEADER	= includes

CC		= gcc
RM		= rm -f
AR		= ar rcs

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
			${CC} -c ${CFLAGS} -o $@ $<

all: $(NAME)

$(NAME):	$(OBJS)
			$(AR) $@ $^

bonus:	$(OBJS) ${OBJS_BONUS}
			$(AR) ${NAME} $^

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:	clean
		${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean bonus re
