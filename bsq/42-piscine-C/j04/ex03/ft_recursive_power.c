/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:33:08 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/10 13:18:33 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (1);
}
