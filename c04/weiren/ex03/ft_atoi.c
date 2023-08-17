/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wei-tan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 22:05:21 by wei-tan           #+#    #+#             */
/*   Updated: 2023/08/10 18:42:30 by wei-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	answer;

	i = 0;
	neg = 1;
	answer = 0;
	while (str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i += 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i += 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		answer = answer * 10 + (str[i] - '0');
		i += 1;
	}
	return (answer * neg);
}
/*
int	main()
{
    printf("%d\n", ft_atoi("   +42"));     // 42
    printf("%d\n", ft_atoi("   -42"));     // -42
    printf("%d\n", ft_atoi("--42"));       // 42
    printf("%d\n", ft_atoi("  \t\n42"));   // 42
    printf("%d\n", ft_atoi("---42"));      // -42
    return 0;
}*/
