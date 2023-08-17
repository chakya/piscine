#include <unistd.h>

void ft_print_numbers(void)
{
	short n;

	n = 47;
	while (++n < 58)
		write (1, &n, 1);
}

void ft_print_numbers2(void)
{
	short n;
	
	n = '/';
	while (++n < ':')
		write (1, &n, 1);
}
