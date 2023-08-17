/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteo <eteo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:57:13 by eteo              #+#    #+#             */
/*   Updated: 2023/08/01 13:26:54 by eteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[50] = "Checking string";
	char	srcstr[50] = "added in";
	printf("%s \n",str);
	*ft_strncpy(str, srcstr, 5);
	printf("%s \n",str);
}
*/
