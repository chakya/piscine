/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndovhal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:13:35 by ndovhal           #+#    #+#             */
/*   Updated: 2023/07/27 14:23:59 by ndovhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
	{
		sign = 'N';
	}
	else
	{
		sign = 'P';
	}
	write(1, &sign, 1);
}

/*test
int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(-3);
	ft_is_negative(0);
	return (0);
}
*/
