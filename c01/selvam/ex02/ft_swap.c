/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthiagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:07:36 by sthiagar          #+#    #+#             */
/*   Updated: 2023/07/30 19:29:18 by sthiagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int*	ptra;
	int*	ptrb;

	a = 1;
	b = 6;
	ptra = &a;
	ptrb = &b;

	printf("%d\t",a);
	printf("%d\n",b);

	ft_swap(ptra,ptrb);
	
	printf("%d \t",a);
        printf("%d",b);

	return(0);
}*/
