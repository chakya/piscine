/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 21:07:40 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/11 13:05:47 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	if (!(str[i] <= '9' && str[i] >= '0'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
