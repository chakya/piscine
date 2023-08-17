/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:40:22 by jotay             #+#    #+#             */
/*   Updated: 2023/08/13 17:01:04 by jotay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 13;
	printf("is prime: %d\n", ft_is_prime(nb));
}
*/
