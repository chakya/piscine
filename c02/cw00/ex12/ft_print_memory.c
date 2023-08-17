/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:36:29 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/31 13:37:32 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void 	*ft_print_memory(void *addr, unsigned int size)
{
	if (size != 0)
	{
		write(1, &addr ,8);
		// printf("%p",addr);
	}
}

int	main(void)
{

	char *str = "ches\n\t\tc\n est fo";
	ft_print_memory(str, 16);
}
