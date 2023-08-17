/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:49:38 by jotay             #+#    #+#             */
/*   Updated: 2023/08/13 15:58:01 by jotay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = -2;
	power = 3;
	printf("result : %d\n", ft_recursive_power(nb, power));
	return (0);
}
*/
