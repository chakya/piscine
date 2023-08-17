/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 22:43:29 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/09 22:43:30 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_arr(int *arr)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

int	check_rule(int *arr, int index, int val)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (arr[i] == val || arr[i] == val - index + i
			|| arr[i] == val + index - i)
			return (0);
		i++;
	}
	return (1);
}

int	solve_ten_queen(int *arr, int index, int *count)
{
	int	i;

	i = 0;
	if (index == 10)
	{
		(*count)++;
		print_arr(arr);
		return (1);
	}
	while (i < 10)
	{
		if (check_rule(arr, index, i))
		{
			arr[index] = i;
			solve_ten_queen(arr, index + 1, count);
		}
		i++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	*arr[10];
	int	count;

	count = 0;
	solve_ten_queen(arr, 0, &count);
	return (count);
}
// #include <stdio.h>
// int main(void)
// {
//     int count = ft_ten_queens_puzzle();
//     printf("%i\n", count);
//     return 0;
// }
