/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 12:38:27 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/15 21:31:47 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "ft.h"

int	error(void)
{
	myft_putstr("Error\n");
	return (0);
}

int	myft_str_totab(char *str, t_sudoku *tab, int l, int *cluen)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (i < 9 && str[i])
	{
		tab[9 * l + i].n = 0;
		tab[9 * l + i].fix = 0;
		if (str[i] >= '1' && str[i] <= '9')
		{
			tab[9 * l + i].n = str[i] - '0';
			tab[9 * l + i].fix = 1;
			(*cluen)++;
		}
		else if (str[i] != '.')
			return (0);
		i++;
	}
	if (str[i])
		return (0);
	if (i != 9)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int			cluen;
	int			i;
	t_sudoku	sudotab[9 * 9];

	if (argc != 10)
		return (error());
	i = 0;
	cluen = 0;
	while (i < 9)
	{
		if (!(myft_str_totab(argv[i + 1], sudotab, i, &cluen)))
			return (error());
		i++;
	}
	if (!myft_check_fix(sudotab))
		return (error());
	if (!(i = myft_sudoku_solver(sudotab, 0)) || i > 1)
		return (error());
	else
		myft_display_soluce();
	return (0);
}
