/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:24:22 by ngoh              #+#    #+#             */
/*   Updated: 2023/08/16 14:43:13 by ngoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

	index = 0;
	(void)argc;
	while (argv[0][index] != '\0')
	{
		write(1, &argv[0][index], 1);
		index++;
	}
	write(1, "\n", 1);
	return (0);
}
