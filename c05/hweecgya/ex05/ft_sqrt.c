/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:12:14 by hchua             #+#    #+#             */
/*   Updated: 2023/08/01 21:12:18 by hchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 1 = %d (1)\n", ft_sqrt(1));
	printf(" 2 = %d (0)\n", ft_sqrt(2));
	printf(" 3 = %d (0)\n", ft_sqrt(3));
	printf(" 4 = %d (2)\n", ft_sqrt(4));
	printf(" 9 = %d (3)\n", ft_sqrt(9));
	printf(" 16 = %d (4)\n", ft_sqrt(16));
	printf(" 25 = %d (5)\n", ft_sqrt(25));
}

