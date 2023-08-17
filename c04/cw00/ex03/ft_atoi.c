/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:50:47 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/03 13:50:48 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg_count;
	int	nb;

	i = 0;
	neg_count = 0;
	while (ft_isspace(*(str + i)) || *(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			neg_count++;
		i++;
	}
	nb = 0;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		nb *= 10;
		nb += *(str + i) - 48;
		i++;
	}
	if (neg_count % 2 == 1)
		return (-nb);
	return (nb);
}

#include <stdio.h>
int main(void)
{
	printf("%i", ft_atoi("   -+--1232913df12312df2"));
	return 0;
}
