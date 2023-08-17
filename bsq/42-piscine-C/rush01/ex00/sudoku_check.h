/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_check.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 17:37:19 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/15 19:52:05 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_CHECK_H
# define SUDOKU_CHECK_H

typedef struct	s_sudoku
{
	int n;
	int fix;
}				t_sudoku;

int				myft_check(t_sudoku *tab, int index);
int				myft_check_fix(t_sudoku *tab);
#endif
