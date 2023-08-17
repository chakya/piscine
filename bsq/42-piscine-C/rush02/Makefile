# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 10:51:43 by dcoloma           #+#    #+#              #
#    Updated: 2018/07/22 19:18:01 by pforciol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = ft_read_patern.c
INCL = ft_read_pattern.h

all: $(NAME)

$(NAME):
	gcc -I$(INCL) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: clean all
