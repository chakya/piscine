/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:33:35 by mchia             #+#    #+#             */
/*   Updated: 2023/07/30 16:21:32 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	rush(0, 0);
	rush(-1, -1);
	return (0);
}
