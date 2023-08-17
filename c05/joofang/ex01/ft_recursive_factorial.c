/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:19:23 by jotay             #+#    #+#             */
/*   Updated: 2023/08/13 14:43:42 by jotay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = 4;
	printf("result:%d\n", ft_recursive_factorial(i));
	return (0);
}
*/
