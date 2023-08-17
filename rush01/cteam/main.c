/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:23:46 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/05 20:55:11 by whuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	v = 0: colup; v = 1: coldown; v = 2: rowleft; v = 3: rowright  */

#include <unistd.h>

int		**create_array(int x, int y);
void	print_array(int **array, int x, int y);

int	parse_for_view(char **argv, int **view, int size)
{
	int	i;
	int	v;
	int	c;

	i = 0;
	v = 0;
	while (argv[1][i] != '\0' && v < size)
	{
		c = 0;
		while (c < size)
		{
			view[v][c] = argv[1][i] - '0';
			i += 2;
			c++;
		}
		v++;
	}
	return (1);
}

int	param_error(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (argv[i] != ' ')
				return (1);
		}
		else
			if (argv[i] < '1' || argv[i] > '4')
				return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	**view;
	int	size;

	size = 4;
	if ((argc != 2) || param_error(argv[1]))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	view = create_array(size, size);
	parse_for_view(argv, view, size);
	print_array(view, size, size);
}
