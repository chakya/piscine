/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbinte-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:39:14 by nbinte-k          #+#    #+#             */
/*   Updated: 2023/08/16 13:36:36 by nbinte-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		result = 1;
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
/*
#include <stdio.h>
int main(void)
{
	int	base = 2;
	int	exponent = 15;
	int	result;

	result = ft_iterative_power(base, exponent);
	printf("Base:%d\nExponent:%d\nResult:%d", base, exponent, result);
	return 0;
}*/
/*Notes*/
//1: Essentially it checks if the power less or equal to 0, returning 1
//2: If not, we establish the int result, which will be the result of
//++using the exponent to the base number.
//++So result x nb = nb.
//3: So the loop will play as long as the power is > 0.
