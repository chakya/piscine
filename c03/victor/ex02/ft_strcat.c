/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:22:37 by vlee              #+#    #+#             */
/*   Updated: 2023/08/02 21:52:12 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include	<stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}	
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char a[20] = "Hello";
	char b[] = "Hello";
	ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}*/
