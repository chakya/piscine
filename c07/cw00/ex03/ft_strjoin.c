/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:50:16 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/14 22:50:20 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int		i;
	int		j;
	int		s1len;
	int		s2len;
	char	*temp;

	s2len = ft_strlen(s2);
	s1len = ft_strlen(s1) + s2len;
	temp = (char *)malloc(sizeof(char) * s1len + 1);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		temp[i + j] = s2[j];
		j++;
	}
	temp[i + j] = '\0';
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char));
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i != size -1)
			dest = ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main()
// {
// 	char	*strs[1] = { "Hello" };
// 	char	*s;

// 	// strs[0] = "dajkfd";
// 	// strs[1] = "fnaefiwh";
// 	// strs[2] = "fgeug";
// 	// strs[3] = "fiuhfiew";
// 	// strs[4] = "fiuehiet";
// 	// strs[5] = "guirhish";
// 	// strs[6] = "rhieutius";
// 	// strs[7] = "hiehtihiuq";
// 	// strs[8] = "tuethiq";
// 	// strs[9] = "riq58674920";
// 	s = ft_strjoin(1, strs, ", ");
// 	char *res = ft_strjoin(1, (char*[]){ "Hello" }, ",");
// 	printf("%s", res);

// 	// printf("%s", s);
// 	free(s);
// 	return (0);
// }
