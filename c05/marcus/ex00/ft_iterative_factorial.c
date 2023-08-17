/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:51:56 by mlow              #+#    #+#             */
/*   Updated: 2023/08/14 17:13:02 by mlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	int	number;

	number = 0;
	printf("Returned number: %d\n", ft_iterative_factorial(number));
	if (ft_iterative_factorial(number) > 0)
	{
	}
	if (ft_iterative_factorial(number) <= 0)
	{
		printf("Argument not valid: return 0\n");
	}
	return (0);
}

// result1 = 1* 3 > 3
// result1(3) = 3 * 2 > 6
//
// or
//
// result2 = 1 * 4 > 4
// resutl2(4) = 4 * 3 > 12
// result2(12) = 12 * 2 > 24
