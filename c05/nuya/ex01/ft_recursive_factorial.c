/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbinte-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:24:11 by nbinte-k          #+#    #+#             */
/*   Updated: 2023/08/14 18:24:15 by nbinte-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int main(void)
{
	int	test = 3;

	printf("%d\n", ft_recursive_factorial(test));
	return 0;
}
15: If it's negative it returns 0
17: The base case is a condition that's defined to terminate a recursion
++ In this case 0 and 1 are the base cases. Return 1.
19: If nb is 4, this will return 4 * 3 because n(4) - 1
++ It loops back to give is 4 * 3 * 2 and so on.
*/