/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyong-ji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:17:04 by tyong-ji          #+#    #+#             */
/*   Updated: 2023/07/27 16:14:38 by tyong-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar4(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar4('N');
	else
		ft_putchar4('P');
}

/*
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(1);
	ft_is_negative(0);
	return (0);
}
*/
