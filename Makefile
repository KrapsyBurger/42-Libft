SRCS = ft_atoi.c\
ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strchr.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_tolower.c\
ft_toupper.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_calloc.c\
ft_strdup.c\
ft_strjoin.c\
ft_substr.c\
ft_striteri.c\
ft_strtrim.c

 OBJS        = ${SRCS:.c=.o}

HEADER        = .

CC        = gcc

CFLAGS        = -Werror -Wall -Wextra -Wconversion

RM        = rm -f

NAME        = libft.a

.c.o:
	${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${OBJS}

re:	fclean all