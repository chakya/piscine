/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:51:17 by manwong           #+#    #+#             */
/*   Updated: 2023/07/31 13:16:15 by manwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg_sign;
	int	result;

	neg_sign = 0;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_sign++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	if (neg_sign % 2)
		return (result * -1);
	return (result);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_atoi("	 ---+--+1234ab567"));
}
*/
