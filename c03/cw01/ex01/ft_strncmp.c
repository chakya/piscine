/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:34:00 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/30 18:49:46 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while ((*(s1 + i) || *(s2 + j)) && (i < n && j < n))
	{
		total = total + *(s1 + i) - *(s2 + j);
		if (*(s1 + i))
			i++;
		if (*(s2 + j))
			j++;
	}
	return (total);
}