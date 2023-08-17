/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:22:37 by vlee              #+#    #+#             */
/*   Updated: 2023/08/02 21:52:12 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
	char a[20] = "aqueduc";
	char b[] = "yozuss";
	ft_strncat(a, b, 6);
	printf("%s\n", a);
	return (0);
}*/
