/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:06:44 by sneo              #+#    #+#             */
/*   Updated: 2023/08/11 11:06:46 by sneo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_sqrt(int nb)
{
	double	rt;
	double	ort;

	rt = 1;
	ort = 0;
	if (nb <= 0)
		return (0);
	while (ort != rt)
	{
		ort = rt;
		rt = ((nb / rt) + rt) / 2;
	}
	return (rt);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	for (int i = -6; i < 40; i++)
		printf("Prime number? %d: %d\n", i, ft_is_prime(i));
}*/
