/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:56:48 by sintan            #+#    #+#             */
/*   Updated: 2023/08/14 23:10:08 by sintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	*arr;
	int	ind;

	bound = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *) malloc(bound * sizeof(int));
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	ind = 0;
	while (min < max)
	{
		arr[ind] = min;
		min++;
		ind++;
	}
	return (bound);
}

/* int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	i;

	min = -2;
	max = 2;
	ft_ultimate_range(&arr, min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
} */
