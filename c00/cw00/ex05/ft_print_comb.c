/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:20:15 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/26 22:21:28 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b, int c)
{
	int	d;

	d = 44;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 55)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				if (!(a == b || a == c || b == c))
				{
					print(a, b, c);
				}
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}
