/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyan-yi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:47:44 by hyan-yi           #+#    #+#             */
/*   Updated: 2023/08/08 17:22:58 by hyan-yi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_row(int *board, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (row == board[i])
			return (0);
		if (row == (board[i] + col - i))
			return (0);
		if (row == (board[i] - col + i))
			return (0);
		i++;
	}
	return (1);
}

int	solve(int *board, int col, int *count)
{
	int	row;

	if (col == 10)
	{
		print(board);
		(*count)++;
		return (1);
	}
	row = 0;
	while (row < 10)
	{
		if (check_row(board, row, col) == 1)
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	solve(board, 0, &count);
	return (count);
}


#include <stdio.h>
int main(void)
{
    int count = ft_ten_queens_puzzle();
    printf("%i\n", count);
    return 0;
}

