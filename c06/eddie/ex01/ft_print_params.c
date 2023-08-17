/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:55:46 by eseet             #+#    #+#             */
/*   Updated: 2023/08/09 16:55:47 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	writeout(char *str)
{
	int	i;

	i = 1;
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

	i = 1;
	while (argc > i)
	{
		writeout(argv[i]);
		i++;
	}
}
