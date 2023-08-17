/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:44:11 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/02 15:26:16 by jechoo           ###   ########.fr       */
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
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	j;

	j = 0;
	dest_len = stringlen(dest);
	while (j < nb && src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world!";

    printf("Original dest: %s\n", dest);

    ft_strncat(dest, src, 3); // Concatenate only 3 characters from src to dest

    printf("Modified dest: %s\n", dest); // Output: "Hello, wor"

    return 0;
}*/
