/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:49:48 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/28 11:53:48 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str)
		else if (*str >= 65 && *str <= 90)
		{
			*str -= 32;
		}
		str++;
	}
}
