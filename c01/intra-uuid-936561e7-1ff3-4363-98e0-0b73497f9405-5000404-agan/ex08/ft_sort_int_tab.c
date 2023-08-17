/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:28:51 by agan              #+#    #+#             */
/*   Updated: 2023/07/28 12:33:02 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	swap;

	swap = 1;
	while (swap == 1)
	{
		swap = 0;
		i = 0;
		while (i <= size - 1)
		{
			if (tab[i] > tab[i + 1] && i != size - 1)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swap = 1;
			}
			i++;
		}
	}
}

/*#include <stdio.h>

int     main(void)
{
        int array[] = {1,9,2,3,5,0,2};
        ft_sort_int_tab(array, 7);
        
        for (int j = 0; j < 7; j++)
        {
                printf("%i", array[j]);
        }
}*/
