/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 18:19:42 by dcoloma           #+#    #+#             */
/*   Updated: 2018/07/22 18:19:47 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int main(int ac, char **av)
{
	int ret;
	char buf[1];
	int	i;
	char *str;
	t_symbol *symbol;

	symbol = NULL;
	i=0;
	while ((ret = read(0,buf, 1)))
	{
		symbol = ft_add_link(symbol, buf[0]);
		buf[ret] = '\0';
	}
	str = ft_get_tab(symbol, ret);
	ft_print(str, ft_get_height(symbol), ft_get_width(symbol));
	return 0;
}
