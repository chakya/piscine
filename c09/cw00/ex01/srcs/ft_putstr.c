/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cngoo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:00:46 by cngoo             #+#    #+#             */
/*   Updated: 2023/07/28 10:24:12 by cngoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	if (str != NULL)
	{
		length = 0;
		while (str[length] != '\0')
		{
			length++;
		}
		write(1, str, length);
	}
}
/*
int	main(void)
{
	char	*string;

	string = "Helllo World!";
	ft_putstr(string);
	return (0);
}*/
