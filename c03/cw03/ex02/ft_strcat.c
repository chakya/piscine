/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:19:53 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/30 19:19:54 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (*(src + j))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
