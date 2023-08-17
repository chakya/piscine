#include "ft_lib.h"

void	ft_putnbr(int nb)
{
	unsigned int	number;

	(nb < 0) ? ft_putchar('-') : 0;
	number = (nb < 0) ? -nb : nb;
	(nb >= 10) ? ft_putnbr(number / 10) : 0;
	ft_putchar(number % 10 + 48);
}