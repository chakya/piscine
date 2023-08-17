/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:49:19 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/14 22:49:20 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = malloc(sizeof(int) * length);
	if (*range == NULL)
		return (-1);
	i = 0;
	while ((min + i) < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (length);
}
