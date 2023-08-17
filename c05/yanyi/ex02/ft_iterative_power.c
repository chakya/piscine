/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyan-yi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:58:15 by hyan-yi           #+#    #+#             */
/*   Updated: 2023/08/06 15:58:44 by hyan-yi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/* 
#include <stdio.h>
int main (void)
{
	printf("%i", ft_iterative_power(2, 3));
} 
*/
