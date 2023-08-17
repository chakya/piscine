#!/bin/sh

cc -c -Wall -Wextra -Werror *.c

ar -crs libft.a *.o

ranlib libft.a

rm -f *.o
