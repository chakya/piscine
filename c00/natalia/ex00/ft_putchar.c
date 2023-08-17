/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndovhal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:32:39 by ndovhal           #+#    #+#             */
/*   Updated: 2023/07/27 10:01:37 by ndovhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* check the function works by outputting a character 
int	main(void)
{
	char	my_char;

	my_char = 'A';
	ft_putchar(my_char);
}
*/
