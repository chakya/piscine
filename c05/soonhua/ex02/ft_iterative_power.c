/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:50:39 by sneo              #+#    #+#             */
/*   Updated: 2023/08/10 19:50:41 by sneo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(0, -5));
	printf("%d\n", ft_iterative_power(-5, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(3, 0));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(1, 1));
	printf("%d\n", ft_iterative_power(3, 1));
	printf("%d\n", ft_iterative_power(1, 3));
	printf("%d\n", ft_iterative_power(-2, 5));
	printf("%d\n", ft_iterative_power(-2, 6));
	printf("%d\n", ft_iterative_power(3.7, 4.3));
}*/
