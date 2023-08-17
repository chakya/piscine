/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 00:34:33 by mlow              #+#    #+#             */
/*   Updated: 2023/08/14 17:14:55 by mlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	root;
	long	nb_long;

	root = 4;
	nb_long = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	while (root <= (nb_long / 4))
	{
		if (root * root == nb_long)
		{
			return (root);
		}
		root++;
	}
	return (0);
}

int	main(void)
{
	int	number;

	number = 169;
	printf("The Square root value: %d\n", ft_sqrt(number));
	return (0);
}

