/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:22:06 by jotay             #+#    #+#             */
/*   Updated: 2023/08/13 15:47:21 by jotay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		num = num * nb;
		power--;
	}
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;
	int	power;

	nb = -2;
	power = 3;
	printf("result: %d\n", ft_iterative_power(nb, power));
	return (0);
}
*/
