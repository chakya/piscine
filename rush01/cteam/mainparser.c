/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:09:32 by hchua             #+#    #+#             */
/*   Updated: 2023/08/05 12:10:00 by hchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	gen_soln(int **view, int **grid, int grid_size);

int	**create_array(int size)
{
	int	**array;
	int	i;

	i = 0;
	array = (int **) malloc(size * sizeof(int *));
	while (i < size)
	{
		array[i] = (int *) malloc(size * sizeof(int));
		i++;
	}
	return (array);
}

/*	v = 0: colup; v = 1: coldown; v = 2: rowleft; v = 3: rowright  */
int	parse_for_view(int argc, char **argv, int **view, int size)
{
	int	i;
	int	v;
	int	c;

	i = 0;
	v = 0;
	if (argc != 2)
		return (0);
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

int	main(int argc, char **argv)
{
	int	**view;
	int	**grid;
	int	size;

	size = 4;
	view = create_array(size);
	parse_for_view(argc, argv, view, size);
	grid = create_array(size);
	gen_soln(view, grid, size);
}
