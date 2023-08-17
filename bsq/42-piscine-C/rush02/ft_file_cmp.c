/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_cmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 19:13:24 by dcoloma           #+#    #+#             */
/*   Updated: 2018/07/22 19:24:43 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>

int *ft_file_cmp(char *str, int width, int height)
{
	int	i;
	char **pattern;
	int	*tab;

	if (!(tab = (int *)malloc(sizeof(int) * 5)))
		return (NULL);
	if (!(pattern = (char **)malloc(sizeof(char*) * 5)))
		return (NULL);
	i = 0;
	while (i < 5)
	{
		if (!(pattern[i] = (char *)malloc(sizeof(char) * 7)))
			return (NULL);
		i++;
	}
	pattern[0] = "oo-|oo\0";
	pattern[1] = "/\\**\\/\0";
	pattern[2] = "AABBCC\0";
	pattern[3] = "ACBBAC\0";
	pattern[4] = "ACBBCA\0";
	i = 0;
	while (i < 5)
	{
		if(!ft_strcmp(str, ft_rush(pattern[i], width, height)))
			tab[i] = 1;
		else
			tab[i] = 0;
		i++;
	}
	return (tab);
}

int		ft_print(char *str, int width, int height)
{
	char **colle;
	int	i;
	int	*result;
	i = 0;

	if (!(colle = (char **)malloc(sizeof(char*) * 5)))
		return (0);
	i = 0;
	while (i < 5)
	{
		if (!(colle[i] = (char *)malloc(sizeof(char) * 10)))
			return (0);
		i++;
	}
	colle[0] = "[colle-00]\0";
	colle[1] = "[colle-01]\0";
	colle[2] = "[colle-02]\0";
	colle[3] = "[colle-03]\0";
	colle[4] = "[colle-04]\0";
	result = ft_file_cmp(str, width, height);
	i = 0;
	while (i < 5)
	{
		if (result[i])
		{
			ft_putstr(colle[i]);
			ft_putstr(" [");
			ft_putnbr(width);
			ft_putstr("] ");
			ft_putstr("[");
			ft_putnbr(height);
			ft_putchar(']');
			ft_putchar('\n');
		}
		i++;
	}
	return (1);
}
