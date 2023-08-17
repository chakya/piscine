/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:06:52 by wtay              #+#    #+#             */
/*   Updated: 2023/08/13 13:16:52 by wtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft.h"
/*
int	ft_strlength(char *str)
{
	int	length;
	
	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_is_valid(unsigned long int nb)
{	
	unsigned long int	i;
	int					n;

	if (nb > 20)
	{
		n = 1;
		i = nb;
		while (i > 1)
		{
			i /= 1000;
			n++;
		}
		if (nb < 100 && nb % 10 != 0)
			return (0);
		if (nb > 100 && nb < 1000)
			return (0);
		if (nb > 1000 && (nb % ft_recursive_power(1000, n - 1)) != 0)
			return (0);
		if (nb > 1000000000)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("%d\n", ft_is_valid(atoi(argv[argc-1])));
}
*/	
