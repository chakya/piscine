/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:51:44 by vlee              #+#    #+#             */
/*   Updated: 2023/08/02 22:51:46 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result_length;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	result_length = i + j;
	while (src[j] != '\0')
	{
		j++;
		result_length++;
	}
	return (result_length);
}
