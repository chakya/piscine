/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:45:55 by dphang            #+#    #+#             */
/*   Updated: 2023/07/31 13:56:38 by dphang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'a') && (str[i] <= 'z'))
				|| ((str[i] >= 'A') && (str[i] <= 'Z'))))
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
	char	str2[10] = "hello!";

	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	return (0);
}*/
