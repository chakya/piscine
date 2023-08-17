/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_soln.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:51:09 by hchua             #+#    #+#             */
/*   Updated: 2023/08/05 16:51:13 by hchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_put1nb(char nb);
void	print_array(int **array, int x, int y);
int	insert_value_col(int **grid, int coord_col);
int	insert_value_row(int **grid, int coord_row);
int	three_insert_value_col(int **grid, int **view, int **view_three_table, int coord_col);
int	three_insert_value_row(int **grid, int **view, int **view_three_table, int coord_row);
int    solve(int **grid, int **view, int pos);

int	scan_for_n(int **view, int view_direction_i, int n_view)
{
	int	j;
	
	j = -1;
	while (j++ < 4)
		if (view[view_direction_i][j] == n_view)
			return(j);
	return (1);
}

int	gen_soln(int **view, int **grid, int **view_three_table, int grid_size)
{
	int	scan_colup;
	int	scan_rowleft;
	
	scan_colup = scan_for_n(view, 0, 4);	
	scan_rowleft = scan_for_n(view, 2, 4);
	insert_value_col(grid, scan_colup);
	insert_value_row(grid, scan_rowleft);
	scan_colup = scan_for_n(view, 0, 3);
	three_insert_value_col(grid, view, view_three_table, scan_colup);
	scan_rowleft = scan_for_n(view, 2, 3);
	three_insert_value_row(grid, view, view_three_table, scan_rowleft);
	print_array(grid, grid_size, grid_size);
	printf("Before\n\n");
	solve(grid, view, 0);
	print_array(grid, grid_size, grid_size);
	printf("After\n");
	return (1);
}
