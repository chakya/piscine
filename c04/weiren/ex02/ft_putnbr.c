/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wei-tan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:51:37 by wei-tan           #+#    #+#             */
/*   Updated: 2023/08/10 18:45:43 by wei-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

void	printnbr(char output)
{
	write(1, &output, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		printnbr('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	printnbr(nb % 10 + '0');
	return ;
}
/*
int	main(void)
{
	int	i;
	i = -21474648;
	ft_putnbr(i);
	write(1, "\n", 1);
	return (0);	
}*/
