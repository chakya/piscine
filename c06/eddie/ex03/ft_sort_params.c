/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:56:04 by eseet             #+#    #+#             */
/*   Updated: 2023/08/09 16:56:05 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	writeout(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		i ++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

void	callerfunction(int size, char *argv[])
{
	while (size)
	{
		writeout(argv[size]);
		size --;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort(int x, char **argv)
{
	int		b;
	char	*z;
	int		a;

	a = 1;
	while (x - 1 > a)
	{
		b = 1;
		while (x - 1 > b)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				z = argv[b];
				argv[b] = argv[a];
				argv[a] = z;
			}
			b++;
		}
		a++;
	}
	callerfunction(x - 1, argv);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	sort(i, argv);
}
