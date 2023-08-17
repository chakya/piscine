/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:29:32 by mlow              #+#    #+#             */
/*   Updated: 2023/08/14 17:13:45 by mlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	divide;

	divide = 2;
	if (nb <= 1)
		return (0);
	while (nb > divide)
	{
		if (nb % divide == 0)
		{
			return (0);
		}
		divide++;
	}
	return (1);
}

int	main(void)
{
	int	number;

	number = 9;
	if(ft_is_prime(number) == 1)
	{
		printf("This is a prime number: %d\n", ft_is_prime(number));
	}
	else
	{
		printf("This isn't a prime number");
	}
	number++;

		printf("0 is a prime number?: %d\n", ft_is_prime(0));
		printf("1 is a prime number?: %d\n", ft_is_prime(1));
		printf("2 is a prime number?: %d\n", ft_is_prime(2));
		printf("3 is a prime number?: %d\n", ft_is_prime(3));
		printf("9 is a prime number?: %d\n", ft_is_prime(9));
		printf("2147483647 is a prime number?: %d\n", ft_is_prime(2147483647));
}

