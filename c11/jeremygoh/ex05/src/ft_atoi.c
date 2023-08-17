/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:15:42 by jergoh            #+#    #+#             */
/*   Updated: 2023/08/16 19:15:43 by jergoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - '0';
	return (nbr * sign);
}