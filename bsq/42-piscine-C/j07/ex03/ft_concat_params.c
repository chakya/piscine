/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:36:10 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/22 02:38:29 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_arglen(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*str;

	i = 1;
	len = 0;
	while (i < argc)
		len = len + ft_arglen(argv[i++]) + 1;
	str = (char*)malloc(sizeof(*str) * len);
	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		while (argv[i][k] != '\0')
			str[j++] = argv[i][k++];
		str[j++] = '\n';
		k = 0;
		i++;
	}
	str[j - 1] = '\0';
	return (str);
}
