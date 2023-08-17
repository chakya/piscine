/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 08:50:21 by dphang            #+#    #+#             */
/*   Updated: 2023/08/02 13:43:04 by dphang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[10] = "Hello";
	char	str2[10] = "Bye";

	printf("%s %s\n", str1, str2);
	ft_strcpy(str1, str2);
	printf("%s %s\n", str1, str2);
	return (0);
}*/
