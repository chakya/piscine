#include <unistd.h>

void ft_putnbr(int nb)
{
	long nbl;
	char c[10];
	short i;

	nbl = nb;
	i = 0;
	if (0 == nb)
	{
		write (1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}
	while (nbl)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i >= 0)
		write (1, &c[--i], 1);
}

int	main(){
	ft_putnbr(62732);
}
