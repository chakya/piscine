/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 05:24:08 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/17 05:24:09 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc ==4)
	{
		int i = 0;
		while (argv[1][i])
		{
			int j = 0;
			while (argv[1][i+j] == argv[2][j])
				j++;
			if (argv[2][j] == '\0')
			{
				write(1, argv[1], i);
				write(1, argv[3], j);
				while (argv[1][i])
				{
					write(1, argv[1][i], 1);
					i++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
