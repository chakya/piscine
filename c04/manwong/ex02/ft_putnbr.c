/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:19:41 by manwong           #+#    #+#             */
/*   Updated: 2023/07/31 13:14:48 by manwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int main()
{
        ft_putnbr(-2147483648);
        // ft_putnbr(-054402);
}

