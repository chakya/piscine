/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viewthreetable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:05:26 by hchua             #+#    #+#             */
/*   Updated: 2023/08/05 20:05:34 by hchua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	populate_view_three_table(int **view_three_table)
{
	view_three_table[0][0] = 2;
	view_three_table[0][1] = 1;
	view_three_table[0][2] = 3;
	view_three_table[0][3] = 4;	
	view_three_table[0][4] = 1;
	view_three_table[1][0] = 2;
	view_three_table[1][1] = 3;
	view_three_table[1][2] = 1;
	view_three_table[1][3] = 4;
	view_three_table[1][4] = 1;
	view_three_table[2][0] = 2;
	view_three_table[2][1] = 3;
	view_three_table[2][2] = 4;
	view_three_table[2][3] = 1;	
	view_three_table[2][4] = 2;
	view_three_table[3][0] = 1;
	view_three_table[3][1] = 2;
	view_three_table[3][2] = 4;
	view_three_table[3][3] = 3;
	view_three_table[3][4] = 2;
	view_three_table[4][0] = 1;
	view_three_table[4][1] = 3;
	view_three_table[4][2] = 2;
	view_three_table[4][3] = 4;	
	view_three_table[4][4] = 1;
	view_three_table[5][0] = 1;
	view_three_table[5][1] = 3;
	view_three_table[5][2] = 4;
	view_three_table[5][3] = 2;
	view_three_table[5][4] = 2;
	return (0);	
}
