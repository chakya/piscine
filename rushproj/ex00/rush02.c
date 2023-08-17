/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:38:01 by mchia             #+#    #+#             */
/*   Updated: 2023/07/30 10:08:57 by mchia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char now);

void	ft_checkx(char FR, char CT, char ED, int x)
{
	int	countx;

	countx = 0;
	while (countx < x)
	{
		if (countx == 0)
		{
			ft_putchar(FR);
		}
		else if (countx != x - 1)
		{
			ft_putchar(CT);
		}
		else
		{
			ft_putchar(ED);
		}
		countx++;
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	int	count;

	count = 0;
	while (count < y)
	{
		if (count == 0)
		{
			ft_checkx('A', 'B', 'A', x);
		}
		else if (count != y - 1)
		{
			ft_checkx('B', 32, 'B', x);
		}
		else
		{
			ft_checkx('C', 'B', 'C', x);
		}
		count++;
	}	
	ft_putchar(10);
}
