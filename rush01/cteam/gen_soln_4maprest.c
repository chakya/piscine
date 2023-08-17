/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_soln_rest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:39:23 by hchua             #+#    #+#             */
/*   Updated: 2023/08/06 12:39:28 by hchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_double(int **grid, int pos, int num)
{
	int i;

	i = -1;
	while (++i < pos / 4)
		if (grid[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (grid[pos / 4][i] == num)
			return (1);
	return (0);
}

int check_col_up(int **grid, int pos, int **view)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (grid[i][pos % 4] > max)
			{
				max = grid[i][pos % 4];
				count++;
			}
			i++;
		}
		if (view[0][pos % 4] != count)
			return (1);
	}
	return (0);
}

int check_row_right(int **grid, int pos, int **view)
{
	int i;
	int max_size;
	int visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (grid[pos / 4][i] > max_size)
			{
				max_size = grid[pos / 4][i];
				visible_towers++;
			}
		}
		if (view[2][pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int check_col_down(int **grid, int pos, int **view)
{
	int i;
	int max;
	int count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (grid[i][pos % 4] > max)
			{
				max = grid[i][pos % 4];
				count++;
			}
			i--;
		}
		if (view[1][pos % 4] != count)
			return (1);
	}
	return (0);
}

int check_row_left(int **grid, int pos, int **view)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (grid[pos / 4][i] > max)
			{
				max = grid[pos / 4][i];
				count++;
			}
			i++;
		}
		if (view[3][pos % 4] != count)
			return (1);
	}
	return (0);
}

int check_case(int **grid, int pos, int **view)
{
	if (check_row_left(grid, pos, view) == 1)
		return (1);
	if (check_row_right(grid, pos, view) == 1)
		return (1);
	if (check_col_down(grid, pos, view) == 1)
		return (1);
	if (check_col_up(grid, pos, view) == 1)
		return (1);
	return (0);
}

int solve(int **grid, int **view, int pos)
{
	int size;

	if (pos == 16)
		return (1);
	size = 0;
	 while (grid[pos / 4][pos % 4] != 0 && pos < 16)
    {
        pos++;
    }
	while (++size <= 4)
	{
		//checking if the number I want to place is correct
		if (check_double(grid, pos, size) == 0)
		{
            grid[pos / 4][pos % 4] = size;
			//checking if the grid is correct with the new number
			if (check_case(grid, pos, view) == 0)
			{
				//checking for next possibility
				if (solve(grid, view, pos + 1) == 1)
					return (1);
			}
			else
				grid[pos / 4][pos % 4] = 0;
		}
	}
	//did not find any solutions
	return (0);
}

// int    presolve(int **grid, int **view, int pos)
// {
//     while (grid[pos / 4][pos % 4] == 0)
//     {
//         pos++;
//     }
//     return solve(grid, view, pos);
// }
