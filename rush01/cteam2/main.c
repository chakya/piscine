/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:41 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/06 19:11:56 by whuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);
int		*extract_view(char *str);
int		check_input(int argc, char **argv);
int		check_double(int **grid, int pos, int num);
int		check_case(int **grid, int pos, int entry[16]);
int		**create_array(int x, int y);
void	free_array(int **array, int x);
void	print_array(int **array, int x, int y);

int	solve(int **grid, int view[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (check_double(grid, pos, size) == 0)
		{
			grid[pos / 4][pos % 4] = size;
			if (check_case(grid, pos, view) == 0)
			{
				if (solve(grid, view, pos + 1) == 1)
					return (1);
			}
			else
				grid[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	*view;

	if (check_input(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	grid = create_array(4, 4);
	view = extract_view(argv[1]);
	if (solve(grid, view, 0) == 1)
		print_array(grid, 4, 4);
	else
		ft_putstr("Error\n");
	free_array(grid, 4);
	free(view);
	return (0);
}
