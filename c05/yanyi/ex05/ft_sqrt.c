/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyan-yi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:21:50 by hyan-yi           #+#    #+#             */
/*   Updated: 2023/08/08 15:21:55 by hyan-yi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
			return ((int)i);
		i++;
	}
	return (0);
}


#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_sqrt(2147483647));
	printf("%i\n", ft_sqrt(2147395600));
	printf("%i\n", ft_sqrt(2147302921));
	printf("%i\n", ft_sqrt(100));
}

