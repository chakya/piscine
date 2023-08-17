/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:35:07 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/02 11:16:37 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[0] == '\0')
	{
		return (s1[0] - s2[0]);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "";
    char str2[] = "Happle";

    unsigned int n = 0;
    int result1 = ft_strncmp(str1, str2, n);
    int result2 = strncmp(str1, str2, n);

    printf("ft_strncmp result 1: %d\n", result1);
    printf("strncmp result 2: %d\n", result2);

    return 0;
}*/
