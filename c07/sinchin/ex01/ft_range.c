/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 22:11:14 by sintan            #+#    #+#             */
/*   Updated: 2023/08/09 23:04:49 by sintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	ind;

	if (min >= max)
		return (0);
	range = max - min;
	arr = (int *) malloc(range * sizeof(int));
	if (arr == NULL)
		return (0);
	ind = 0;
	while (min < max)
	{
		arr[ind] = min;
		ind++;
		min++;
	}
	return (arr);
}

/* int	 main(void)
{
	int	*arr;
	int	i;
	int 	range;

	i = 0;
	arr = ft_range(-2, 2);
	while (i < 4)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
} */
