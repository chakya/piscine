/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 12:38:30 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/15 19:50:52 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "sudoku.h"

static int g_soluce[9 * 9];
static int g_nbsoluce = 0;

void	myft_display_soluce(void)
{
	int l;
	int r;

	l = 0;
	while (l < 9)
	{
		r = 0;
		while (r < 9)
		{
			if (g_soluce[l * 9 + r] == 0)
				myft_putchar('.');
			else
				myft_putchar(g_soluce[l * 9 + r] + '0');
			if (r < 8)
				myft_putchar(' ');
			r++;
		}
		myft_putchar('\n');
		l++;
	}
}

void	myft_display_sudoku(t_sudoku *tab)
{
	int l;
	int r;

	l = 0;
	while (l < 9)
	{
		r = 0;
		while (r < 9)
		{
			if (tab[l * 9 + r].n == 0)
				myft_putchar('.');
			else
				myft_putchar(tab[l * 9 + r].n + '0');
			if (r < 8)
				myft_putchar(' ');
			r++;
		}
		myft_putchar('\n');
		l++;
	}
}

int		addsoluce(t_sudoku *tab)
{
	int i;

	i = 0;
	if (!g_nbsoluce)
	{
		while (i < 9 * 9)
		{
			g_soluce[i] = tab[i].n;
			i++;
		}
	}
	g_nbsoluce++;
	return (g_nbsoluce);
}

int		myft_sudoku_solver(t_sudoku *tab, int index)
{
	if (tab[index].fix)
	{
		if (!myft_check(tab, index))
			return (0);
		else if (index < 9 * 9 - 1)
			return (myft_sudoku_solver(tab, index + 1));
		else
			return (addsoluce(tab));
	}
	tab[index].n = 1;
	while (tab[index].n < 10)
	{
		if (myft_check(tab, index))
		{
			if (index == 9 * 9 - 1)
				return (addsoluce(tab));
			else if (myft_sudoku_solver(tab, index + 1) > 1)
				return (g_nbsoluce);
		}
		tab[index].n++;
	}
	return (g_nbsoluce);
}
