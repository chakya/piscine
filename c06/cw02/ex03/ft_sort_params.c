/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:27:18 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/03 19:27:19 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	put_arr(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
// void	ft_swap(char *str1, char *str2)
// {
// 	char	*temp;

// 	temp = str1;
// 	str1 = str2;
// 	str2 = temp;
// }

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		j = 1;
		i++;
	}
	put_arr(argc, argv);
	return (0);
}
