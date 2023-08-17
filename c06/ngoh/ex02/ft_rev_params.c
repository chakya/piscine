/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:44:39 by ngoh              #+#    #+#             */
/*   Updated: 2023/08/16 18:57:35 by ngoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	outer;
	int	inner;

	outer = argc - 1;
	while (outer > 0)
	{
		inner = 0;
		while (argv[outer][inner] != '\0')
		{
			write(1, &argv[outer][inner], 1);
			inner++;
		}
		write(1, "\n", 1);
		outer--;
	}
	return (0);
}	
