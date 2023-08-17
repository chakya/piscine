/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteo <eteo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:10:05 by eteo              #+#    #+#             */
/*   Updated: 2023/08/01 13:26:17 by eteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	st[50] = "just checking";
	char	flst[50] = "inputting";

	printf("The string before %s\n", st);
	*ft_strcpy(st, flst);
	printf("The string after %s\n", st);
}
*/
