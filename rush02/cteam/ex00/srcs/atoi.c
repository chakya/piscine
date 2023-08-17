/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:41:52 by wtay              #+#    #+#             */
/*   Updated: 2023/08/13 21:11:18 by wtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft.h"

long int	ft_atoi(char *str)
{
	int					sign;
	long int			result;
	int					i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

long int	ft_atoi_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' && str[i + 1] != '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			return (ft_atoi(str));
	}
	return (-1);
}
