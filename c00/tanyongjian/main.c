#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"

void main(void){
    ft_putchar('a');
    write (1,"\n",2);
    ft_print_alphabet();
    write (1,"\n",2);
    ft_print_reverse_alphabet();
    write (1,"\n",2);
    ft_print_numbers();
    write (1,"\n",2);
    ft_is_negative(-3);
    write (1,"\n",2);
    ft_is_negative(NULL);
    write (1,"\n",2);
    ft_is_negative(0);
    write (1,"\n",2);
    ft_is_negative(5);
    write (1,"\n",2);
    ft_is_negative(25);
}
