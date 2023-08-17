/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:46 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/06 19:00:52 by whuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str);

int	check_input(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (1);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (argv[1][i] != ' ')
				return (1);
		}
		else
			if (argv[1][i] < '1' || argv[1][i] > '4')
				return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	*extract_view(char *str)
{
	int	i;
	int	j;
	int	*view;

	view = malloc(sizeof(int) * 16);
	if (view == 0)
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			view[j++] = ft_atoi(str + i);
	return (view);
}
