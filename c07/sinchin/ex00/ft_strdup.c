/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:21:21 by sintan            #+#    #+#             */
/*   Updated: 2023/08/09 22:08:39 by sintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		index;

	i = 0;
	index = 0;
	while (src[i] != '\0')
		i++;
	copy = (char *) malloc(i * sizeof(char));
	if (copy == NULL)
		return (0);
	while (src[index] != '\0')
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}

int	 main(void)
{
	char	str[] = "Hello";

	printf("My func: %s\n", ft_strdup(str));
	printf("Default func: %s", strdup(str));
}
