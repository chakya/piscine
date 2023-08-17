/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteo <eteo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:13:11 by eteo              #+#    #+#             */
/*   Updated: 2023/08/01 17:55:25 by eteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	i;

	cap = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (cap == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				cap = 0;
			}
		}
		if (!('a-z' 'A-Z' 0-9))
			cap = 1;
		if (str[i] >= '0' && str[i] <= '9')
			cap = 0;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Old: %s\n", str);
	ft_strcapitalize(str);
	printf("New: %s\n", str);
}
*/
