/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstine <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:26:49 by cstine            #+#    #+#             */
/*   Updated: 2023/08/07 18:00:59 by cstine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	k;	

	j = 0;
	k = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (k < nb && src[k] != '\0')
	{
		dest[j + k] = src[k];
		k++;
	}
	dest[j + k] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Morning";
	char	dest[] = "Good ";

	printf("%s", ft_strncat(dest, src, 6));
}*/
