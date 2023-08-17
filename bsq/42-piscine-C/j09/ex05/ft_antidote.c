/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 05:16:59 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/13 05:59:01 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int		tab[3];
	int		index;
	int		tmp;

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	index = 0;
	while (index < 2)
	{
		if (tab[index] > tab[index + 1])
		{
			tmp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = tmp;
			index = 0;
		}
		index++;
	}
	return (tab[1]);
}
