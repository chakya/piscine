/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:37:08 by ngoh              #+#    #+#             */
/*   Updated: 2023/08/16 16:42:07 by ngoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	inner;
	int	outer;

	inner = 1;
	while (inner < argc)
	{
		outer = 0;
		while (argv[inner][outer] != '\0')
		{
			write(1, &argv[inner][outer], 1);
			outer++;
		}
		write(1, "\n", 1);
		inner++;
	}
	return (0);
}	
