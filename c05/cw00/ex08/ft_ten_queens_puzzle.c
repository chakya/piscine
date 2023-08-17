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
#include <stdlib.h>

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
	int	*arr;
	int	count;

	count = 0;
	arr = (int *)malloc(10 * sizeof(int));
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
