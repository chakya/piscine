/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:41:00 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/01 16:41:16 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	if (i >= size)
		return (i + size);
	while (*(src + j) && j < size -1)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	while (*(src + j))
		j++;
	return (i + j);
}
