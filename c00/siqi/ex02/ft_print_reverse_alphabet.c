#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	short c;

	c = 122;
	while (c > 96)
	{
	write (1, &c, 1);
	--c;
	}
}

void ft_print_reverse_alphabet2(void)
{
	short c;

	c = '`';
	while (--c >= 'z')
	write (1, &c, 1);
}
