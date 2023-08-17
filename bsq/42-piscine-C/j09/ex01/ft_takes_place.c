/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:48:03 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/12 23:53:02 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 24 || hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour >= 1 && hour <= 10)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour % 12, (hour + 1) % 12);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour >= 13 && hour <= 22)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour % 12, (hour + 1) % 12);
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
