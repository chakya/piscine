/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:48:57 by bsim              #+#    #+#             */
/*   Updated: 2023/07/31 15:19:17 by bsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int   main(void)
{
        char    dest[30];
        char    src[30];

        strcpy(dest, "Hello, ");
        strcpy(src, "World!");
        ft_strncat(dest, src, 2);
        printf("After concatenation: %s\n", dest);
        return (0);
}*/
