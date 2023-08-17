/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstine <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:40:21 by cstine            #+#    #+#             */
/*   Updated: 2023/08/10 13:15:29 by cstine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	k;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		k = 0;
		while (str[j + k] == to_find[k] && str[j + k] != '\0')
		{
			if (to_find[k + 1] == '\0')
				return (&str[j]);
			k++;
		}
		j++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "AiyaorAiyo";
	char	to_find[] = "r";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
