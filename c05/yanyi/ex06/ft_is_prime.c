/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyan-yi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:22:55 by hyan-yi           #+#    #+#             */
/*   Updated: 2023/08/08 15:23:40 by hyan-yi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	long long	i;

	if (nb < 2)
		return (0);
	i = 2;
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int c = 2147488281;
	int d = 2147483647;
	printf("%i\n", c);
	printf("%i\n", d/c);
	printf("%i\n", ft_is_prime(2147483647));
}
*/
