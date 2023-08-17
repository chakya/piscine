/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:39:56 by jakong            #+#    #+#             */
/*   Updated: 2023/08/07 20:22:29 by jakong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_wpscs(char *str)
{
	if (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		return (1);
	else
		return (0);
}

int	ft_signs(char *str)
{
	if ((*str == '+') || (*str == '-'))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	neg;
	int	output;

	neg = 1;
	output = 0;
	while (ft_wpscs(str))
		str++;
	while (ft_signs(str))
	{
		if (*str == '-')
			neg = neg * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		output = output * 10 + (*str - '0');
		str++;
		if (!(*str >= '0' && *str <= '9'))
		{
			output = output * neg;
			return (output);
		}
	}
	return (0);
}

#include <stdio.h>
int    main(void)
{
    char    *str1 = " \t\n ---+--+1234";

    printf("%d", ft_atoi(str1));
}
