/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:38:52 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/15 19:29:53 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		myft_check_l(t_sudoku *tab, int index)
{
	int r;
	int l;

	r = 0;
	l = index / 9;
	while (r < 9)
	{
		if (l * 9 + r != index)
		{
			if (r < index % 9 && tab[l * 9 + r].n == tab[index].n)
				return (0);
			if (tab[l * 9 + r].fix && tab[l * 9 + r].n == tab[index].n)
				return (0);
		}
		r++;
	}
	return (1);
}

int		myft_check_r(t_sudoku *tab, int index)
{
	int r;
	int l;

	r = index % 9;
	l = 0;
	while (l < 9)
	{
		if (l * 9 + r != index)
		{
			if (l < index / 9 && tab[l * 9 + r].n == tab[index].n)
				return (0);
			if (tab[l * 9 + r].fix && tab[l * 9 + r].n == tab[index].n)
				return (0);
		}
		l++;
	}
	return (1);
}

int		myft_check_s(t_sudoku *tab, int index)
{
	int i;
	int s;
	int s0;

	s0 = ((index / 9) / 3) * 3 * 9 + ((index % 9) / 3) * 3;
	i = 0;
	while (i < 9)
	{
		s = s0 + i % 3 + i / 3 * 9;
		if (s != index)
		{
			if (s < index && tab[s].n == tab[index].n)
				return (0);
			if (tab[s].fix && tab[s].n == tab[index].n)
				return (0);
		}
		i++;
	}
	return (1);
}

int		myft_check(t_sudoku *tab, int index)
{
	if (!myft_check_l(tab, index))
		return (0);
	if (!myft_check_r(tab, index))
		return (0);
	if (!myft_check_s(tab, index))
		return (0);
	return (1);
}

int		myft_check_fix(t_sudoku *tab)
{
	int i;

	i = 0;
	while (i < 9 * 9)
	{
		if (tab[i].fix)
		{
			if (!myft_check(tab, i))
				return (0);
		}
		i++;
	}
	return (1);
}
