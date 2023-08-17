/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:50:11 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/04 03:17:20 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			i++;
	else
		return (0);
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[99];
	char	empty_string[] = "";
	char	numeric[] = "1234567890";
	char	not_numeric[] = "abcd";

	printf ("empty_string: %d\n", ft_str_is_numeric(empty_string));
	printf ("1234567890 = %d\n", ft_str_is_numeric(numeric));
	printf ("abcd = %d\nmanualinput: ", ft_str_is_numeric(not_numeric));
	scanf ("%s", str);
	printf ("%d",ft_str_is_numeric(str));
}
*/
