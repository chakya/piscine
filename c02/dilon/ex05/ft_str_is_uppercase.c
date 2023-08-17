/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:31:44 by dphang            #+#    #+#             */
/*   Updated: 2023/07/31 16:41:55 by dphang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i += 1;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char	str1[10] = "Hello";
	char	str2[10] = "HELLO";
	char	str3[10] = "4224";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	return (0);
}*/
