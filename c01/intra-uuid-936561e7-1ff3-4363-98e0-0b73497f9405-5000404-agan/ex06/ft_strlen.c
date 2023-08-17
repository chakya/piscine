/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:23:49 by agan              #+#    #+#             */
/*   Updated: 2023/07/28 12:08:46 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len ++;
		str++;
	}
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	char 	s[] = "HELLO!";
	int len = ft_strlen(s);
	printf("strlen is %i", len);
}*/
