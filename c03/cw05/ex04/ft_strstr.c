/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:27:54 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/31 21:28:07 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	j = 0;
	while (*(str + i))
	{
		while (*(str + i + j) == *(to_find + j))
		{
			j++;
			if (*(to_find + j) == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
