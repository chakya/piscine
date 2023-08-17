/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cngoo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:22:28 by cngoo             #+#    #+#             */
/*   Updated: 2023/07/28 09:31:35 by cngoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 5;
	num2 = 10;
	printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}*/
