/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:40:35 by bsim              #+#    #+#             */
/*   Updated: 2023/07/28 15:14:02 by bsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{	
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	string1[20];
	char	string2[20];
	char	string3[20];

	strcpy(string1, "Hello");
	strcpy(string2, "123abc");
	strcpy(string3, "Hello");
	printf("New string1:  %d\n", ft_strcmp(string1, string2));
	printf("New string2:  %d\n", ft_strcmp(string1, string3));
	printf("New string3:  %d\n", ft_strcmp(string2, string3));
	return (0);
}*/
