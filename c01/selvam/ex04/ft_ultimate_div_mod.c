/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthiagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:50:26 by sthiagar          #+#    #+#             */
/*   Updated: 2023/07/30 19:36:03 by sthiagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
int     main(void)
{
        int     a;
        int     b;
        int*    ptra;
        int*    ptrb;

        a = 101;
        b = 50;
        ptra = &a;
        ptrb = &b;

        printf("%d ",a);
        printf("%d ",b);

        ft_ultimate_div_mod(ptra,ptrb);

        printf("%d ",a);
        printf("%d ",b);

        return(0);
}*/
