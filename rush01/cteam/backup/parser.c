/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:46 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/06 13:52:48 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);

int ft_atoi(char *str);
int ft_strlen(char *str);
int *get_numbers(char *str);
int check(int ac, char **av);
int check_double(int **grid, int pos, int num);
int check_case(int **grid, int pos, int entry[16]);
#include <stdlib.h>

int check(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != 31)
		return (1);
	return (0);
}

int *get_numbers(char *str)
{
	int i;
	int j;
	int *grid;

	if (!(grid = malloc(sizeof(int) * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			grid[j++] = ft_atoi(str + i);
	return (grid);
}
