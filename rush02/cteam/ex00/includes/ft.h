/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:09:26 by manwong           #+#    #+#             */
/*   Updated: 2023/08/12 20:15:05 by manwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define SIZE 32

typedef struct s_nb_text
{
	unsigned long int		nb;
	char					*text;
}		t_nb_text;

long int			ft_atoi(char *str);
char				*ft_output_str(char *str);
char				*ft_strdup(char *src);
int					ft_is_valid(unsigned long int nb);
t_nb_text			*parse(char *filename);
t_nb_text			*sort_array(t_nb_text *arr);
void				ft_swap(t_nb_text *struct1, t_nb_text *struct2);
unsigned long int	convert(unsigned long int nb, t_nb_text *dict, int *start);
int					has_existed(t_nb_text *arr, unsigned long int nb, int pos);
long int			ft_atoi_valid(char *str);

#endif
