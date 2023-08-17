/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstine <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:08:34 by cstine            #+#    #+#             */
/*   Updated: 2023/08/07 17:20:53 by cstine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Morning";
	char	dest[] = "Good";

	printf("%s", ft_strcat(dest, src));
}*/
