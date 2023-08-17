/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:17:01 by dphang            #+#    #+#             */
/*   Updated: 2023/08/01 17:53:57 by dphang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i += 1;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[10] = "Hello";
	char	str2[10] = "HELLO";
	char	str3[10] = "HeLlO";

	printf("%s\n", str1);
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", str2);
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", str3);
	printf("%s\n", ft_strupcase(str3));
	return (0);
}*/
