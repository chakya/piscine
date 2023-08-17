/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:14:15 by sneo              #+#    #+#             */
/*   Updated: 2023/08/10 20:14:17 by sneo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(0, -5));
	printf("%d\n", ft_recursive_power(-5, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(0, 3));
	printf("%d\n", ft_recursive_power(1, 1));
	printf("%d\n", ft_recursive_power(3, 1));
	printf("%d\n", ft_recursive_power(1, 3));
	printf("%d\n", ft_recursive_power(-2, 5));
	printf("%d\n", ft_recursive_power(-2, 6));
	printf("%d\n", ft_recursive_power(3.7, 4.3));
}*/
