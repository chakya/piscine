/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:45:14 by agan              #+#    #+#             */
/*   Updated: 2023/07/28 12:05:45 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpdiv;
	int	tmpmod;

	tmpdiv = *a / *b;
	tmpmod = *a % *b;
	*a = tmpdiv;
	*b = tmpmod;
}

/*#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a is %i, b is %i", a, b);
}*/
