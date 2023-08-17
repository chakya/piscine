/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbinte-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:11:09 by nbinte-k          #+#    #+#             */
/*   Updated: 2023/08/15 21:11:11 by nbinte-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
#include <stdio.h>
int main(void)
{
	int	number = 9;
	int	pwr = 3;
	int	result = ft_recursive_power(number, pwr);

	printf("Number:%d\nPower:%d\nResult:%d", number, pwr, result);
	return 0;
}
*/