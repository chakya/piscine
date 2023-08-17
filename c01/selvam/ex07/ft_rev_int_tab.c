/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthiagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:27:39 by sthiagar          #+#    #+#             */
/*   Updated: 2023/07/30 19:42:30 by sthiagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	current;
	int	last;

	current = 0;
	last = size - 1;
	while (current <= last)
	{
		temp = *(tab + current);
		*(tab + current) = *(tab + last);
		*(tab + last) = temp;
		++current;
		--last;
	}
}
/*
int	main(void)
{
	int	iarray[5] = {1,2,3,4,5};
	int	i;
	int	size;

	size = 5;
	i = 0;
	ft_rev_int_tab(iarray, size);
	while (i < size)
	{
		printf("\t %d \n", *(iarray + i));
		++i;
	}
	return (0);
}*/
