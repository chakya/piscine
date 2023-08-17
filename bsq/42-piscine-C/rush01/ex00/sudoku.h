/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 12:38:33 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/15 19:31:00 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include "sudoku_check.h"

void	myft_display_soluce(void);
void	myft_display_sudoku(t_sudoku *tab);
int		myft_sudoku_solver(t_sudoku *tab, int index);
#endif
