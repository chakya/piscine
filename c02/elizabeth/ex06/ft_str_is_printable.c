/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteo <eteo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:54:07 by eteo              #+#    #+#             */
/*   Updated: 2023/08/01 16:18:05 by eteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str <  || *str > '~')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	char	*str = "asdkn";
	printf("%d\n", ft_str_is_printable(str));
}
*/
