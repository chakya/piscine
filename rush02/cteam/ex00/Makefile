NAME = rush-02
SRC_DIR = ./srcs/

FUNCTS = rush02 atoi ft_strdup convert ft_is_valid parse arr_util
OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRC_DIR)%.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))

.PHONY: all $(NAME) $(OBJECTS) clean fclean re

all: $(NAME) clean

$(OBJECTS):
	@gcc $(OPTIONS) $(FLAGS) -c $(CFILES) -g

$(NAME): $(OBJECTS)
	@gcc $(OPTIONS) $(FLAGS) $(OBJECTS) -o $(NAME) -g

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)
