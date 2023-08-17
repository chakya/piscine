/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:25:03 by jotay             #+#    #+#             */
/*   Updated: 2023/08/14 18:20:48 by jotay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	num;
	long	nb2;

	nb2 = nb;
	num = 2;
	if (nb2 <= 0)
		return (0);
	if (nb2 == 1)
		return (1);
	while (num * num <= nb2)
	{
		if (num * num == nb2)
			return (num);
		num++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("result: %d\n", ft_sqrt(81));
	printf("result: %d\n", ft_sqrt(INT_MAX));
}
*/
