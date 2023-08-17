/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:34:56 by nzachari          #+#    #+#             */
/*   Updated: 2023/08/10 15:53:02 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	while (*a == *b && *a && *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	swap_order(char **cursor, char **compare_with)
{
	char	*tmp_address;

	tmp_address = *cursor;
	*cursor = *compare_with;
	*compare_with = tmp_address;
}

void	sort(int argc, char **argv)
{
	int	cursor;
	int	compare_with;

	cursor = 1;
	while (cursor < argc -1)
	{
		compare_with = cursor + 1;
		while (compare_with < argc)
		{
			if (ft_strcmp (argv[cursor], argv[compare_with]) > 0)
				swap_order (&argv[cursor], &argv[compare_with]);
			compare_with++;
		}
		cursor++;
	}
}

void	print(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	sort(argc, argv);
	while (++i < argc)
		print(argv[i]);
	return (0);
}
