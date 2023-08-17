/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:43:24 by sneo              #+#    #+#             */
/*   Updated: 2023/08/11 10:43:28 by sneo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double	rt;
	double	ort;

	rt = 1;
	ort = 0;
	if (nb <= 0)
		return (0);
	while (ort != rt)
	{
		ort = rt;
		rt = ((nb / rt) + rt) / 2;
	}
	if ((int)rt == rt)
		return (rt);
	return (0);
}

# include <stdio.h>

int	main(void)
{
	int	i;

	for (i = -5; i < 11; i++)
		printf("square root of %d is %d\n",i, ft_sqrt(i));
	return 0;
}
