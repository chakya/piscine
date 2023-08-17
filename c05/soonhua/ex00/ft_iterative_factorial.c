/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:14:53 by sneo              #+#    #+#             */
/*   Updated: 2023/08/10 19:14:55 by sneo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (nb > 1)
			result *= nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(-3));
	printf("%d\n", ft_iterative_factorial(25));
	printf("%d\n", ft_iterative_factorial(5.6));
}*/
