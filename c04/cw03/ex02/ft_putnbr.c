/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:51:32 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/02 13:51:33 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	nb = -nb;
	if (nb < 0 && nb > -10)
	{
		ft_putchar('-');
	}
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr(nb / 10);
	}
	if (nb < 0)
		i = -(nb % 10);
	else
		i = nb % 10;
	ft_putchar (i + '0');
}

int main()
{
	ft_putnbr(-2147483647);
        // ft_putnbr(-544020);
        // ft_putnbr(-544020);
	// ft_putnbr(-1081741163);
}
// int	power(int a, int p)
// {
// 	while (p > 0)
// 	{
// 		a *= a;
// 		p--;
// 	}
// 	return (a);
// }

// void	ft_putnbr(int nb)
// {
// 	int	tenth;
// 	int	i;
// 	int	to_print;
// 	int	sign;

// 	if (nb == 0)
// 		write(1, "", 1);
// 	else if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		sign = -1;
// 	}
// 	tenth = nb / 10 * sign;
// 	while (tenth > 0)
// 	{
// 		i = nb / (power(10, tenth));
// 		to_print = i + '0';
// 		write(1, &to_print, 1);
// 		nb -= i * power(10, tenth);
// 		tenth--;
// 	}
// }
