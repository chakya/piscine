/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:41 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/06 13:52:43 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int	ft_atoi(char *str);
int	ft_strlen(char *str);
int	*get_numbers(char *str);
int	check(int ac, char **av);
int	check_double(int **grid, int pos, int num);
int	check_case(int **grid, int pos, int entry[16]);
int	**create_array(int x, int y);
void	free_array(int **array, int x);
void	print_array(int **array, int x, int y);

int solve(int **grid, int view[16], int pos)
{
	int size;

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

void display_solution(int **grid)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int main(int ac, char **av)
{
	int **grid = create_array(4, 4);
	int *view;

	if (check(ac, av) == 1)
		return (0);
	view = get_numbers(av[1]);

	if (solve(grid, view, 0) == 1)
		display_solution(grid);
	else
		ft_putstr("No solutions\n");
	free_array(grid, 4);
	return (0);
}
