/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:15:09 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/09 16:15:10 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return ((int)i);
	return (0);
}
