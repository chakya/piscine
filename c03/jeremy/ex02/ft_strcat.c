/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:06:46 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/02 15:28:28 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	stringlen(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	if (str[0] == '\0')
	{
		i = 0;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	j;

	j = 0;
	dest_len = stringlen(dest);
	while (src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	if (dest[0] == '\0')
	{
		return (src);
	}
	else
	{
		return (dest);
	}
}

#include <stdio.h>

int main()
{
    char dest[20] = "";
    char src[] = "world!";

    printf("Original dest: %s\n", dest);
    printf("original strlen: %i\n", stringlen(dest));

    ft_strcat(dest, src); // Concatenate src to dest

    printf("Modified dest: %s\n", dest);
    printf("modfied dest strlen: %i\n", stringlen(dest));

    return 0;
}
