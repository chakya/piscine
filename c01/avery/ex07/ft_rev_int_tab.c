/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:35:32 by agan              #+#    #+#             */
/*   Updated: 2023/07/28 12:12:51 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;	

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int tab[] = {6,5,4,3,2,1,0};
	ft_rev_int_tab(tab, 7);

	int j;
	for (j = 0; j < 7; j++)
		printf("%i", tab[j]);

	return 0;
}*/
