/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 22:10:48 by dcoloma           #+#    #+#             */
/*   Updated: 2018/07/22 22:10:51 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
typedef struct s_symbol t_symbol;
struct s_symbol
{
	char c;
	t_symbol *next;

};
t_symbol	*ft_add_link(t_symbol *symbol, char c);
char	*ft_get_tab(t_symbol *symbol, int size);
void	ft_print_symbol(t_symbol *symbol);
int		ft_get_width(t_symbol *symbol);
int		ft_get_height(t_symbol *symbol);
int		ft_print(char *str, int width, int height);
char	*ft_rush(char *pattern, int width, int height);

#endif
