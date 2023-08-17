/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hilim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 00:29:33 by hilim             #+#    #+#             */
/*   Updated: 2023/08/15 01:05:36 by hilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	stop;

	i = 0;
	stop = 0;
	while (stop == 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			stop = 1;
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					swap = argv[i];
					argv[i] = argv[j];
					argv[j] = swap;
				}
				j++;
			}
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
