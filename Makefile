SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

HEADER = ./includes/ft.h

OBJS = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iincludes

NAME = libft.a

all: ${NAME}

${NAME}: ${HEADERS} ${COMP}
	ar rcs ${NAME} ${COMP}
	ranlib ${NAME}

clean:
	rm -f ${COMP}

fclean: clean
	rm -f ${NAME}

re: fclean all