/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:46:41 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/30 11:16:10 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	a;
char	b;
char	c;
char	d;
char	h;
char	v;

char a = 'o';
char b = 'o';
char c = 'o';
char d = 'o';
char h = '-';
char v = '|';

void	printsquare(int i, int j, int col, int row)
{
	if (i == 0 && j == 0)
		write(1, &a, 1);
	else if (j == col - 1 && i == 0)
		write(1, &b, 1);
	else if (j == 0 && i == row - 1)
		write(1, &c, 1);
	else if (j == col - 1 && i == row - 1)
		write(1, &d, 1);
	else if (i == 0 || i == row - 1)
		write(1, &h, 1);
	else if (j == 0 || j == col - 1)
		write(1, &v, 1);
	else
		write(1, " ", 1);
	if (j == col - 1)
		write (1, "\n", 1);
}

void	rush(int col, int row)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < col)
		{
			printsquare(i, j, col, row);
			j++;
		}
		j = 0;
		i++;
	}
}
