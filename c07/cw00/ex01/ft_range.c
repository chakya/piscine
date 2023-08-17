/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:45:51 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/14 22:45:52 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = malloc(sizeof(int) * (len));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
