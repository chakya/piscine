/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caltan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 00:55:03 by caltan            #+#    #+#             */
/*   Updated: 2023/08/16 22:17:07 by caltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	s = (char *)malloc(sizeof(char) * len);
	if (s == NULL)
		return (0);
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	s = ft_create_str(size, strs, sep);
	while (x < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
		{
			s[i++] = strs[x][y++];
		}
		y = 0;
		while (sep[y] != '\0' && x != size - 1)
		{
			s[i++] = sep[y++];
		}
		x++;
	}
	s[i] = '\0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**strs;
	char	*sep;
	char	*res;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 15 + 1);
	strs[0] = "Hello";
	strs[1] = "evaluator,";
	strs[2] = "you are amazing";
	sep = "&&";
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	free(res);
}
*/
