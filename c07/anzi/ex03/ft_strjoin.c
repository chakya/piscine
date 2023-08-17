/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:57:59 by achak             #+#    #+#             */
/*   Updated: 2023/08/09 15:47:59 by achak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;

	while (*s1 != '\0')
		s1++;
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		l;
	int		i;
	char	*s;

	i = 0;
	if (size == 0)
	{
		s = malloc(sizeof(char));
		s[0] = '\0';
		return (s);
	}
	while (i < size)
		l += ft_strlen(strs[i++]);
	l += (ft_strlen(sep) * (size - 1));
	s = malloc(sizeof(char) * l);
	i = 0;
	while (i < size)
	{
		ft_strcat(s, strs[i]);
		if (i < (size - 1))
			ft_strcat(s, sep);
		i++;
	}
	return (s);
}

/*#include <stdio.h>

int	main()
{
	char	*strs[10];
	char	*s;

	strs[0] = "dajkfd";
	strs[1] = "fnaefiwh";
	strs[2] = "fgeug";
	strs[3] = "fiuhfiew";
	strs[4] = "fiuehiet";
	strs[5] = "guirhish";
	strs[6] = "rhieutius";
	strs[7] = "hiehtihiuq";
	strs[8] = "tuethiq";
	strs[9] = "riq58674920";
	s = ft_strjoin(10, strs, "GIHSIRHIS");
	printf("%s", s);
	free(s);
	return (0);
}*/
