/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:33:07 by achak             #+#    #+#             */
/*   Updated: 2023/08/09 15:47:19 by achak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = malloc(sizeof(int) * length);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (length);
}

// #include <stdio.h>

// int	main()
// {
// 	int	*range;

// 	printf("%d", ft_ultimate_range(&range, 2, 9));
print(range)
// 	free(range);
// }
