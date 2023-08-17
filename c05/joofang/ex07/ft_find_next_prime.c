/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:02:19 by jotay             #+#    #+#             */
/*   Updated: 2023/08/13 17:21:24 by jotay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	while (ft_is_prime(nb) == 1)
		return (nb);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 12;
	printf("result: %d\n", ft_find_next_prime(nb));
	return (0);
}
*/
