/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caltan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:20:56 by caltan            #+#    #+#             */
/*   Updated: 2023/08/16 22:07:50 by caltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = ((int *)malloc(sizeof(int) * (max - min)));
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	size;
	int	*tab;
	int	max;
	int	min;

	i = 0;
	min = -3;
	max = 7;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
		i++;
	printf("%d\n", size);
}
*/
