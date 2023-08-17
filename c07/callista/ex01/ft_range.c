/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caltan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:44:17 by caltan            #+#    #+#             */
/*   Updated: 2023/08/16 21:54:02 by caltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = ((int *)malloc(sizeof(int) * (max - min)));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*array;
	int	min;
	int	max;

	i = 0;
	min = -7;
	max = 1;
	array = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", array[i]);
		i++;
	}
}
*/
