/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 07:57:53 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/04 08:34:37 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
	else
		return (0);
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	char	only_lower_alpha[] = "abcdef";
	char	only_num[] = "123";
	char	only_upper_alpha[] = "ABC";
	char	contains_upper_alpha[] = "abcDEF";
	char	contains_num[] = "abc123";
	char	manual_input[99];

	printf ("abcdef: %d\n", ft_str_is_lowercase(only_lower_alpha));
	printf ("123: %d\n", ft_str_is_lowercase(only_num));
	printf ("ABC: %d\n", ft_str_is_lowercase(only_upper_alpha));
	printf ("abcDEF: %d\n", ft_str_is_lowercase(contains_upper_alpha));
	printf ("abc123: %d\n", ft_str_is_lowercase(contains_num));
	printf ("manual input: ");
	scanf ("%s", manual_input);
	printf ("manual input: %d\n", ft_str_is_lowercase(manual_input));
	return (0);
}
*/
