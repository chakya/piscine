/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyong-ji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:00:20 by tyong-ji          #+#    #+#             */
/*   Updated: 2023/07/27 16:08:28 by tyong-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar3(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar3(number);
		number++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
