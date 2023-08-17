/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_pattern.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 10:53:10 by dcoloma           #+#    #+#             */
/*   Updated: 2018/07/21 12:18:18 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

t_symbol	*ft_add_link(t_symbol *symbol, char c)
{
	t_symbol *tmp;
	t_symbol *new_element;

	if(!(new_element = (t_symbol *)malloc(sizeof(t_symbol))))
		return (NULL);
	new_element->c = c;
	new_element->next = NULL;
	if (symbol == NULL)
		return (new_element);
	else
	{
		tmp = symbol;
		while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_element;
        return symbol;
	}
}

void	ft_print_symbol(t_symbol *symbol)
{
	while(symbol)
	{
		ft_putchar(symbol->c);
		symbol = symbol->next;
	}
}

int		ft_get_width(t_symbol *symbol)
{
	int	i;

	i = 0;
	while (symbol && symbol->c != '\n')
	{
		symbol = symbol->next;
		i++;
	}
	return (i);
}

int		ft_get_height(t_symbol *symbol)
{
	int	i;

	i = 0;
	while (symbol)
	{
		if (symbol->c == '\n')
			i++;
		symbol = symbol->next;
	}
	return (i);
}

char	*ft_get_tab(t_symbol *symbol, int size)
{
	int	i;
	char *tab;

	if(!(tab = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (symbol)
	{
		tab[i] = symbol->c;
		i++;
		symbol = symbol->next;
	}
	return (tab);
}