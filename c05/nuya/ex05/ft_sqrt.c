/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbinte-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:42:36 by nbinte-k          #+#    #+#             */
/*   Updated: 2023/08/16 16:42:37 by nbinte-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		return (nb * ft_power(nb, power - 1));
	}
}

int	ft_sqrt(int nb)
{
	int	sqrrt;

	sqrrt = 0;

	if (nb == 1)
		return (1);
	if (nb > 0)
	{
		while (sqrrt <= 46342)
		{
			if (ft_power(sqrrt, 2) == nb)
				return (sqrrt);
			sqrrt++;
		}
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	int	test = 9;
// 	int	result;

// 	result = ft_sqrt(16);
// 	printf("Squaroot %d", ft_sqrt(16));
// 	// printf("if 0, Number is an Irrational Number");
// 	return 0;
// }
