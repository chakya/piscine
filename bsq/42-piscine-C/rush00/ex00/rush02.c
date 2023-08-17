/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoimbee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:29:35 by awoimbee          #+#    #+#             */
/*   Updated: 2018/07/07 14:29:43 by awoimbee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** (w == 1 || w == width) = start or end of line
** (h == 1 || h == height) = top or bottom of colunm
*/

void	rush(int width, int height)
{
	int	w;
	int h;

	h = 0;
	while (h++ < height)
	{
		w = 0;
		while (w++ < width)
		{
			if (h == 1 && (w == 1 || w == width))
				ft_putchar('A');
			else if (h == height && (w == 1 || w == width))
				ft_putchar('C');
			else if ((w == 1 || w == width) || (h == 1 || h == height))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
