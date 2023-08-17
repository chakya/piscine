/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:34:00 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/02 11:58:24 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "a";
    char to_find1[] = "a";
    char to_find2[] = "a";
    char to_find3[] = "abc";

    char *result1 = ft_strstr(str, to_find1);
    char *result2 = strstr(str, to_find2);
    char *result3 = ft_strstr(str, to_find3);

    printf("Original string: %s\n", str);
    printf("Substring 'world' found at: %s\n", result1); //  "world!"
    printf("Substring 'lo' found at: %s\n", result2); //: "lo, world!"
    printf("Substring 'abc' found at: %s\n", result3); //"Substr not found."

    return 0;
}*/
