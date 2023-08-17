/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbinte-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:59:54 by nbinte-k          #+#    #+#             */
/*   Updated: 2023/08/14 17:59:55 by nbinte-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = 3;
	printf("%d\n", ft_iterative_factorial(test));
}*/