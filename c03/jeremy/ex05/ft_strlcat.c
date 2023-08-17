/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:36:19 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/02 15:30:39 by jechoo           ###   ########.fr       */
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

char	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	j;

	j = 0;
	dest_len = stringlen(dest);
	while (dest_len < nb && src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		dest[nb] = '\0';
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    
    printf("Before ft_strlcat: dest = %s, src = %s\n", dest, src);
    ft_strlcat(dest, src, 20);
    printf("After ft_strlcat: dest = %s, src = %s\n", dest, src);
    
    return 0;
}*/
