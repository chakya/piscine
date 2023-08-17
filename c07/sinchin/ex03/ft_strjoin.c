/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:13:12 by sintan            #+#    #+#             */
/*   Updated: 2023/08/15 21:04:28 by sintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_mem(char **strings, int size, int sep_length)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_str_length(strings[i]);
		length += sep_length;
		i++;
	}
	length -= sep_length;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*string;
	char	*copy;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	length = ft_total_mem(strs, size, ft_str_length(sep));
	string = (char *) malloc((length + 1) * sizeof(char));
	copy = string;
	if (string == NULL)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(string, strs[i]);
		string += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_str_length(sep);
		}
	}
	*string = '\0';
	return (copy);
}

/* int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "string1";
	strs[1] = "string2";
	strs[2] = "string3";
	separator = "-";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
} */
