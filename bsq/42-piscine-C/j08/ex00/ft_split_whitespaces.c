/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 19:26:20 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/23 05:25:02 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int in_word;
	int count;

	i = 0;
	in_word = 0;
	count = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int		ft_word_length(char *str, int i)
{
	int length;

	length = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
			&& str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	words = (char**)malloc(sizeof(char*) * ft_count_words(str) + 1);
	while (str[i] != '\0' && j < ft_count_words(str))
	{
		k = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		words[j] = (char*)malloc(sizeof(char) * ft_word_length(str, i) + 1);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
		{
			words[j][k++] = str[i++];
		}
		words[j][k] = '\0';
		j++;
	}
	words[j] = 0;
	return (words);
}
