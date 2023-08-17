/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyan-yi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:24:19 by hyan-yi           #+#    #+#             */
/*   Updated: 2023/08/08 15:25:43 by hyan-yi          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2147483647);
}


#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_find_next_prime(2147483643));
}

