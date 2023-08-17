/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:43:06 by manwong           #+#    #+#             */
/*   Updated: 2023/08/13 15:09:43 by manwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_swap(t_nb_text *struct1, t_nb_text *struct2)
{
	t_nb_text	temp;

	temp = *struct1;
	*struct1 = *struct2;
	*struct2 = temp;
}

t_nb_text	*sort_array(t_nb_text *arr)
{
	int	i;
	int	min_index;
	int	j;

	i = 0;
	while (i < SIZE - 1)
	{
		min_index = i;
		j = i + 1;
		while (j < SIZE)
		{
			if (arr[j].nb < arr[min_index].nb)
				min_index = j;
			j++;
		}
		ft_swap(&arr[i], &arr[min_index]);
		i++;
	}
	return (arr);
}

int	has_existed(t_nb_text *arr, unsigned long int nb, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (nb == arr[i].nb)
			return (0);
		i++;
	}
	return (1);
}
