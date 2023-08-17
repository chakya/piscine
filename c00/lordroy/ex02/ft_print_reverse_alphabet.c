/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlasjord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:42:46 by rlasjord          #+#    #+#             */
/*   Updated: 2023/07/27 17:20:56 by rlasjord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write (1, &z, 1);
		z--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
