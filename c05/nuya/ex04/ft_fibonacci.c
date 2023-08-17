/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbinte-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:51:33 by nbinte-k          #+#    #+#             */
/*   Updated: 2023/08/16 13:38:04 by nbinte-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 5;
	int	fibby;

	fibby = ft_fibonacci(n);
	printf("Index:%d\nValue at index:%d", n, fibby);
	return (0);
}
~~Notes~~
15 - 20
-------
As first two of the Fib is 0,1, (i == 0)= 0 and (i == 1) = 1
+As requested, when index < 0, it returns -1.
-------
22 - 23
-------
index >= 2 so using the recursive function, we get
ft_fibonacci(4-1)(3) and fibonacci(4-2)(2)
i'm way too tired to put this into proper notes but
it just loops until it returns 1. Multiple times. I think.
Something like that.
-------
*/
