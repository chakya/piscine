/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:49:56 by bsim              #+#    #+#             */
/*   Updated: 2023/07/31 11:30:53 by bsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		k++;
	}
	if (j >= size)
		return (size + k);
	while (src[i] != '\0' && (j + i + 1) < size)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + k);
}

/*int	main(void)
{
	char	dest[20];
	char	src[10];
	unsigned int	result;

	strcpy(dest, "Hello, ");
	strcpy(src, "World!");
	result = ft_strlcat(dest, src, 11);
	printf("After ft_strlcat: dest = '%s', src = '%s'\n", dest, src);
	printf("Concatenated length: %u\n", result);
	return (0);
}*/
