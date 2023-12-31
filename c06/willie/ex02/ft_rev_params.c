/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waw <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:54:16 by waw               #+#    #+#             */
/*   Updated: 2023/08/15 17:05:53 by waw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			str = argv[i];
			while (*str)
			{
				write(1, str, 1);
				str++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
