/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_value34.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:33:57 by hchua             #+#    #+#             */
/*   Updated: 2023/08/06 12:34:04 by hchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	insert_value_col(int **grid, int coord_col)
{
	int 	i;
	
	i = 0;
	while (i < 4)
	{
		grid[i][coord_col] = i + 1;
		i++;
	}
	return (1);
}

int	insert_value_row(int **grid, int coord_row)
{
	int 	i;
	
	i = 0;
	while (i < 4)
	{
		grid[coord_row][i] = i + 1;
		i++;
	}
	return (1);
}

int	three_insert_value_col(int **grid, int **view, int **view_three_table, int coord_col)
{
	int	coldown;
	int	i;
	int	j;
	
	coldown = view[1][coord_col];
	i = 0;
	while ( i < 6 )
	{
		j = 0;
		while (j < 4 && view_three_table[i][4] == coldown)
		{
			if (view_three_table[i][j] == grid[j][coord_col])
			{
				j=0;
				while (j < 4)
				{
					grid[j][coord_col] = view_three_table[i][j];
					j++;
				}
				return (1);
			}	
			j++;
		}
		i++;	
	}
	return (0);
}

int	three_insert_value_row(int **grid, int **view, int **view_three_table, int coord_row)
{
	int	rowright;
	int	i;
	int	j;
	
	rowright = view[1][coord_row];
	i = 0;
	while ( i < 6 )
	{
		j = 0;
		while (j < 4 && view_three_table[i][4] == rowright)
		{
			if (view_three_table[i][j] == grid[coord_row][j])
			{
				j=0;
				while (j < 4)
				{
					grid[coord_row][j] = view_three_table[i][j];
					j++;
				}
				return (1);
			}	
			j++;
		}
		i++;	
	}
	return (0);
}
