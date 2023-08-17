/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndovhal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:58:33 by ndovhal           #+#    #+#             */
/*   Updated: 2023/07/27 14:11:21 by ndovhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number ++;
	}
}

/*test with the main for number output
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
