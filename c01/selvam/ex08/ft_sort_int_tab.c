/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthiagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:44:11 by sthiagar          #+#    #+#             */
/*   Updated: 2023/07/30 19:45:13 by sthiagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size -1 - i)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
			++j;
		}
		++i;
		j = 0;
	}
}
/*
int	main(void)
{
	int	i = 0;
	int	iarr[5] = {19,2,0,6,14};

	ft_sort_int_tab(iarr, 5);
	while (i < 5)
	{
		printf("%d ",*(iarr+i));
		i++;
	}
}*/
