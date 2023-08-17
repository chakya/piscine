/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:07:50 by mlow              #+#    #+#             */
/*   Updated: 2023/08/14 17:36:07 by mlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (1 < nb)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

int	main(void)
{
	int	number;

	number = 4;
	printf("Returned value: %d\n", ft_recursive_factorial(number));
	if (ft_recursive_factorial(number) < 0)
	{
		printf("Argument not vaild: Return 0\n");
	}
	if (ft_recursive_factorial(number) > 0)
	{
	}
	return (0);
}

