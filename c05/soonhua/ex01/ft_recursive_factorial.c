/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:26:39 by sneo              #+#    #+#             */
/*   Updated: 2023/08/10 19:26:41 by sneo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(-3));
	printf("%d\n", ft_recursive_factorial(25));
	printf("%d\n", ft_recursive_factorial(26));
}*/
