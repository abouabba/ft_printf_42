
CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

NAME = libftprintf.a

SRC =	ft_printf.c ft_puthex.c ft_putnbr.c ft_putunsigned.c \
		ft_putchar.c ft_puthexupper.c ft_putstr.c ft_putpointer.c

OBJ = ${SRC:.c=.o}

HEADER = ft_printf.h

all : ${NAME}

${NAME} : ${OBJ}
		${AR} ${NAME} ${OBJ}
	
%.o:%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean :
		rm -f ${OBJ}

fclean : clean
		rm -f ${NAME}

re : fclean all
