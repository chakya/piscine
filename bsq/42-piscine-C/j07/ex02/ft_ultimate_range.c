/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 15:08:55 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/19 14:26:20 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
