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

int	gen_soln(int **view, int **grid, int **view_three_table, int grid_size);
int	**create_array(int x, int y);
void	populate_view_three_table(int **view_three_table);
void	print_array(int **array, int x, int y);

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
	int	**view_three_table;
	int	size;

	size = 4;
	view = create_array(size, size);
	parse_for_view(argc, argv, view, size);
	grid = create_array(size, size);
	view_three_table = create_array(6, 5);
	populate_view_three_table(view_three_table);
	gen_soln(view, grid, view_three_table, size);
}
