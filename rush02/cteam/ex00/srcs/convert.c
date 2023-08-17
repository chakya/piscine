/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   convert.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: cwijaya <marvin@42.fr>					 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/08/12 19:38:24 by cwijaya		   #+#	#+#			 */
/*   Updated: 2023/08/12 19:38:25 by cwijaya		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */
#include "ft.h"
#include <unistd.h>

void	ft_print_dict(t_nb_text *dict, int index, int *start)
{
	int	i;

	i = 0;
	if (!(*start))
	{
		write(1, " ", 1);
	}
	while (dict[index].text[i])
	{
		write(1, &dict[index].text[i], 1);
		i++;
	}
	*start = 0;
}

unsigned long int	convert(unsigned long int nb, t_nb_text *dict, int *start)
{
	unsigned long int	mult;
	unsigned long int	i;

	if (nb <= 20)
		ft_print_dict(dict, nb, start);
	else
	{
		i = SIZE - 1;
		while (dict[i].nb != 0)
		{
			if (nb % (dict[i].nb) != nb)
			{
				mult = nb / (dict[i].nb);
				if ((dict[i].nb) > 99)
					convert(mult, dict, start);
				ft_print_dict(dict, i, start);
				if (nb - mult * (dict[i].nb) == 0)
					return (1);
				return (convert(nb - mult * (dict[i].nb), dict, start));
			}
			i--;
		}
	}
	return (1);
}
