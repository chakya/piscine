/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hilim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 00:27:07 by hilim             #+#    #+#             */
/*   Updated: 2023/08/15 00:29:14 by hilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	c;
	int	len;

	c = --argc;
	while (c >= 1)
	{
		len = 0;
		while (argv[c][len])
			len++;
		write(1, argv[c], len);
		write(1, "\n", 1);
		c--;
	}
	return (0);
}