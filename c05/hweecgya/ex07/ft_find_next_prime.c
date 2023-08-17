/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:06:41 by hchua             #+#    #+#             */
/*   Updated: 2023/08/01 22:06:49 by hchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else
	{
		i =  2;
		while (i < nb -1)
		{
			if (nb % i == 0)
				return (0);
			i--;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("3578 = %d (2)\n", ft_find_next_prime(3578));
	// printf("-10 = %d (2)\n", ft_find_next_prime(-10));
	// printf(" 0 = %d (2)\n", ft_find_next_prime(0));
	// printf(" 1 = %d (2)\n", ft_find_next_prime(1));
	// printf(" 2 = %d (2)\n", ft_find_next_prime(2));
	// printf(" 3 = %d (3)\n", ft_find_next_prime(3));
	// printf(" 4 = %d (5)\n", ft_find_next_prime(4));
	// printf(" 5 = %d (5)\n", ft_find_next_prime(5));
	// printf(" 6 = %d (7)\n", ft_find_next_prime(6));
	// printf(" 7 = %d (7)\n", ft_find_next_prime(7));
	// printf(" 8 = %d (11)\n", ft_find_next_prime(8));
	// printf(" 9 = %d (11)\n", ft_find_next_prime(9));
	// printf(" 10 = %d (11)\n", ft_find_next_prime(10));
	// printf(" 11 = %d (11)\n", ft_find_next_prime(11));
}

