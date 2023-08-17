/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteo <eteo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:57:15 by eteo              #+#    #+#             */
/*   Updated: 2023/08/01 18:41:12 by eteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include<stdio.h>

int	main(void)
{
	char	srcstr[] = "Hello, just checking";
	char	deststr[] = "this is";
	int		output;

	printf("%s\n", deststr);
	output = ft_strlcpy(deststr, srcstr, sizeof(deststr));
	printf("%s, output: %d\n", deststr, output);
}
*/
