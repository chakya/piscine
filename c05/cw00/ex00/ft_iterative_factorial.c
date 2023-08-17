/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:46:21 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/03 16:46:22 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
