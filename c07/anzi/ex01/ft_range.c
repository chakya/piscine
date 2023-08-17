/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:06:06 by achak             #+#    #+#             */
/*   Updated: 2023/08/09 15:45:51 by achak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	length;
	int	i;

	if (min >= max)
		return (NULL);
	length = max - min;
	arr = malloc(sizeof(int) * (length));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// #include <stdio.h>

// int	main()
// {
// 	int	min;
// 	int	max;
// 	int	i;
// 	int	length;
// 	int	*arr;

// 	min = -50;
// 	max = 20;
// 	length = max - min;
// 	arr = ft_range(min, max);
// 	i = 0;
// 	while (i < length)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }
