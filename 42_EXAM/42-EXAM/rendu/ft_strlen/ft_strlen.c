/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 05:21:46 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/17 05:21:47 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
