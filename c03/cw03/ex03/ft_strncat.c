/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:19:53 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/30 19:21:48 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (*(src + j) && j < n)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
