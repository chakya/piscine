/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:10:11 by mlow              #+#    #+#             */
/*   Updated: 2023/08/14 18:41:20 by mlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
/*
int	main(void)
{
	int	number;
	int	power;

	number = 5;
	power = 3;
	printf("result %d\n", ft_recursive_power(number, power));
	return (0);
}
*/
