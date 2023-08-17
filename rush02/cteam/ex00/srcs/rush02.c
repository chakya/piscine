/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:11:36 by manwong           #+#    #+#             */
/*   Updated: 2023/08/12 21:16:18 by manwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	checkarg(int argc, char *nb)
{
	long	i;

	i = ft_atoi_valid(nb);
	if (i >= 1000000000000)
	{
		write(1, "Dict Error\n", 12);
		return (0);
	}
	if (argc < 2 || argc > 3 || i < 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

void	free_arr(t_nb_text *arr)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		free(arr[i].text);
		i++;
	}
	free(arr);
}

int	check_dup(t_nb_text *arr)
{
	int	i;

	i = 0;
	while (i < SIZE - 1)
	{
		if (arr[i].nb == arr[i + 1].nb)
		{
			write (1, "Dict Error\n", 12);
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_nb_text	*arr;
	char		*nb;
	char		*dict;
	int			start;

	dict = "numbers.dict";
	if (argc == 2)
		nb = argv[1];
	else if (argc == 3)
	{
		nb = argv[2];
		dict = argv[1];
	}
	if (checkarg(argc, nb) && parse(dict))
	{
		arr = sort_array(parse(dict));
		if (check_dup(arr))
			return (1);
		start = 1;
		convert(ft_atoi(nb), arr, &start);
		free_arr(arr);
	}
	return (0);
}
