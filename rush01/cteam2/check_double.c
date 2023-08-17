/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:53 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/06 18:58:55 by whuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int **grid, int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (grid[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (grid[pos / 4][i] == num)
			return (1);
	return (0);
}
