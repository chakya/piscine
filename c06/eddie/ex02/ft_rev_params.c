/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:55:53 by eseet             #+#    #+#             */
/*   Updated: 2023/08/09 16:55:54 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	writeout(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1 ;
	while (i > 0)
	{
		writeout(argv[i]);
		i--;
	}
}
