/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 08:36:19 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/04 09:17:06 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
	else
		return (0);
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	test1[] = "ABCDEF";
	char	test2[] = "abcdef";
	char	test3[] = "123456";
	char	test4[] = "ABC123";
	char	test5[] = "ABCdef";
	char	manual_input[99];

	printf ("passed:\"ABCDEF\", return: %d\n", ft_str_is_uppercase(test1));
	printf ("passed:\"abcdef\", return: %d\n", ft_str_is_uppercase(test2));
	printf ("passed:\"123456\", return: %d\n", ft_str_is_uppercase(test3));
	printf ("passed:\"ABC123\", return: %d\n", ft_str_is_uppercase(test4));
	printf ("passed:\"ABCdef\", return: %d\n", ft_str_is_uppercase(test5));
	printf ("manual input: ");
	scanf ("%s", manual_input);
	printf ("passed \"%s\", return: %d",
		   	manual_input, ft_str_is_uppercase(manual_input));
}
*/
