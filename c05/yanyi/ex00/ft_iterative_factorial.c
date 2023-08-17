/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyan-yi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:55:14 by hyan-yi           #+#    #+#             */
/*   Updated: 2023/08/06 15:56:52 by hyan-yi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}

/*
#include <stdio.h>
int main (void)
{
	printf("%i", ft_iterative_factorial(2));
}
*/
