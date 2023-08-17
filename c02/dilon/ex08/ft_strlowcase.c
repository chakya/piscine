/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:45:38 by dphang            #+#    #+#             */
/*   Updated: 2023/07/31 18:34:22 by dphang           ###   ########.fr       */
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
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", str2);
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", str3);
	printf("%s\n", ft_strlowcase(str3));
	return (0);
}*/
