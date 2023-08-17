/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:02:28 by dphang            #+#    #+#             */
/*   Updated: 2023/07/31 17:15:17 by dphang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
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
	char	str3[10] = "Hello 42!";
	char	str4[10] = "\n";

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	return (0);
}*/
