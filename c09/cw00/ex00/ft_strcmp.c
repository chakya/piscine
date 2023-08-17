/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cngoo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:54:25 by cngoo             #+#    #+#             */
/*   Updated: 2023/08/02 09:27:51 by cngoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	src[50] = "abcd";
	char	dest[50] = "abcd";
	char	src_a[50] = "abcd";
	char	dest_a[50] = "abcd";
	
	int	result;

	
	result = ft_strcmp(dest, src);
	printf("ft_strcmp result = %d\n", result);
	
	result = strcmp(dest_a, src_a);
	printf("   strcmp result = %d\n", result);
	
	printf("Src   : %s\n", src);
	printf("Dest  : %s\n", dest);


	return (0);
}*/
