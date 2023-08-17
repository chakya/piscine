/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hilim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 00:21:15 by hilim             #+#    #+#             */
/*   Updated: 2023/08/15 00:26:32 by hilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int argc, char *argv[])
{
	int	c;
	int	len;

	c = 1;
	while (c < argc)
	{
		len = 0;
		while (argv[c][len])
			len++;
		write(1, argv[c], len);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
