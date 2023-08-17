/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteo <eteo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:25:36 by eteo              #+#    #+#             */
/*   Updated: 2023/08/01 14:56:03 by eteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if (*str < 'A' || ('Z' < *str && *str < 'a') || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "d3sfkAn";

	printf("%d\n", ft_str_is_alpha(str));
}
*/
