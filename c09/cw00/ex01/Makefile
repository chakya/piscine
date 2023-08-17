NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes
FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC = ${SRCDIR}/${FILES}
OBJ = $(addprefix $(SRCDIR)/, $(FILES:.c=.o))

all: ${NAME}

${NAME}:$(OBJ)
	ar -src ${NAME} ${OBJ}
	ranlib $(NAME)

# ${SRCDIR}/%.o : ${SRC}
# 	cc -c ${CFLAGS} ${SRC}

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# $(SRCDIR)/%.o: $(SRCDIR)/%.c
# 	cc $(CFLAGS) -c $<

clean :
	rm -f ${SRCDIR}/%.o

fclean :
	clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean fclean re
