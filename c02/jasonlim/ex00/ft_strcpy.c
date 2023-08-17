/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:52:43 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/03 21:35:14 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

/*#include <stdio.h>
int	main(void)
{
	char	src[5];
	char	dest[] = "sauce";

	printf("src: %s", src);
	printf("hi sir, what do you to replace dest with?? max 5 char: ");
	scanf("%s", src);
	printf("your dest was originally:\"%s\"\n", dest);
	ft_strcpy(dest, src);
	printf("your dest is now: \"%s\"\n", dest);
}
*/
