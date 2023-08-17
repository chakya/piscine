/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:26:49 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/03 23:01:01 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[99] = "sauce";
	char src[99];
	unsigned int n;

	printf("what do you want to copy to dest?\n");
	scanf("%s", src);
	printf("n: ");
	scanf("%u", &n);
	printf("dest was \"%s\"\n", dest); 
	ft_strncpy(dest, src, n);
	printf("now it is \"%s\"", dest);
}
*/
