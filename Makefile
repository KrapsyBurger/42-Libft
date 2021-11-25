SRCS = ft_atoi.c
ft_bzero.c
ft_isalnum.c
ft_isalpha.c
ft_isascii.c
ft_isdigit.c
ft_isprint.c
ft_memchr.c
ft_memcmp.c
ft_memcpy.c
ft_memmove.c
ft_memset.c
ft_strchr.c
ft_strlcat.c
ft_strlcpy.c
ft_strlen.c
ft_strncmp.c
ft_strnstr.c
ft_strrchr.c
ft_tolower.c
ft_toupper.c

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