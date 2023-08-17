/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:01:55 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/04 00:21:43 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[99];
	char	empty_string[] = "";

	printf ("empty_string:%d\n", ft_str_is_alpha(empty_string));
	printf ("all alphabet = \"1\"\nnot all alphabet = \"0\"\nft_str_is_alpha:");
	scanf ("%s", str);
	printf ("%d", ft_str_is_alpha(str));
}*/
