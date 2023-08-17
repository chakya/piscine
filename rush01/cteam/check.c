qq/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:52:05 by whuang            #+#    #+#             */
/*   Updated: 2023/08/05 21:28:03 by whuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if 'val' is not present in the row and column
int	is_valid(int **grid, int row, int col, int val)
{
	int	i;

	i = 0;
	while (grid[row][i] && grid[i][col])
	{
		if (grid[row][i] == val || grid[i][col] == val) {
			return (0);
		}
		i++;
	}
	return (1);
}

int	get_vis(int arr[4])
{
	int	i;
	int	len;
	int	vis;

	len = arr[0];
	vis = 1;
	i = 1;
	while (i < 4)
	{
		if (len < arr[i])
		{
			vis++;
			len = arr[i];
		}	
		i++;
	}
	return (vis);
}

void	get_array_vis(int vis[4][4], int ans[4][4])
{
	int	vis[4][4];

	vis[0][0] = get_vis(ans[0][0], ans[1][0], ans[2][0], ans[3][0]);
	vis[0][1] = get_vis(ans[0][1], ans[1][1], ans[2][1], ans[3][1]);
	vis[0][2] = get_vis(ans[0][2], ans[1][2], ans[2][2], ans[3][2]);
	vis[0][3] = get_vis(ans[0][3], ans[1][3], ans[2][3], ans[3][3]);
	vis[1][0] = get_vis(ans[3][0], ans[2][0], ans[1][0], ans[0][0]);
	vis[1][1] = get_vis(ans[3][1], ans[2][1], ans[1][1], ans[0][1]);
	vis[1][2] = get_vis(ans[3][2], ans[2][2], ans[1][2], ans[0][2]);
	vis[1][3] = get_vis(ans[3][3], ans[2][3], ans[1][3], ans[0][3]);
	vis[2][0] = get_vis(ans[0][0], ans[0][1], ans[0][2], ans[0][3]);
	vis[2][1] = get_vis(ans[1][0], ans[1][1], ans[1][2], ans[1][3]);
	vis[2][2] = get_vis(ans[2][0], ans[2][1], ans[2][2], ans[2][3]);
	vis[2][3] = get_vis(ans[3][0], ans[3][1], ans[3][2], ans[3][3]);
	vis[3][0] = get_vis(ans[0][3], ans[0][2], ans[0][1], ans[0][0]);
	vis[3][1] = get_vis(ans[1][3], ans[1][2], ans[1][1], ans[1][0]);
	vis[3][2] = get_vis(ans[2][3], ans[2][2], ans[2][1], ans[2][0]);
	vis[3][3] = get_vis(ans[3][3], ans[3][2], ans[3][1], ans[3][0]);
}

int	check_visibility(int clues[4][4], int ans[4][4])
{
	int	vis[4][4];
	int	i;
	int	j;

	get_array_vis(vis, ans);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (clues[i][j] != vis[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
