/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:00:28 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/09 16:00:29 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			total *= nb;
			power--;
		}
		return (total);
	}
}

// int	main(void)
// {
// 	ft_iterative_power (-2, 3);
// }
