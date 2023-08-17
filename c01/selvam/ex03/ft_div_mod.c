/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthiagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:40:02 by sthiagar          #+#    #+#             */
/*   Updated: 2023/07/30 19:32:21 by sthiagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int     main(void)
{
        int     a;
        int     b;
	int	div;
	int	mod;
        int*    ptrd;
        int*    ptrm;

        a = 11;
        b = 5;
        ptrd = &div;
        ptrm = &mod;

        printf("%d ",a);
        printf("%d ",b);

        ft_div_mod(a,b,ptrd,ptrm);

        printf("%d ",div);
        printf("%d ",mod);

        return(0);
}*/
