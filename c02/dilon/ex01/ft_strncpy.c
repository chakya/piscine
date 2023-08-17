/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:27:52 by dphang            #+#    #+#             */
/*   Updated: 2023/08/01 14:26:08 by dphang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i += 1;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[10] = "Hello";
	char	str2[10] = "Bye";
	unsigned int	c;

	c = 5;
	printf("%s\n", str1);
	ft_strncpy(str1, str2, c);
	printf("%s\n", str1);
	return (0);
}*/
