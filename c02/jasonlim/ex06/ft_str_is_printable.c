/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:05:07 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/04 10:52:19 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 32 && str[i] <= 126)
			i++;
	else
		return (0);
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test0[] = "printable";
	char	test1[] = "";
	char	test2[] = "DEL";
	char	test3[] = "\x7F";
	char	test4[] = "ello\tgovna";
	char	manual_input[99];

	printf ("passed: \"%s\", returned: %d\n",
		test0, ft_str_is_printable(test0));
	printf ("passed: an empty string, returned: %d\n",
		ft_str_is_printable(test1));
	printf ("passed: \"%s\" as a string literal, returned: %d\n",
		test2, ft_str_is_printable(test2));
	printf ("passed: \"\\x7F\" as a string literal, returned: %d\n",
		ft_str_is_printable(test3));
	printf ("passed: string with tab character \"\\t\", returned: %d\n",
		ft_str_is_printable(test4));
	printf ("manual input: ");
	scanf ("%s", manual_input);
	printf ("passed \"%s\", returned: %d",
		manual_input, ft_str_is_printable(manual_input));
}*/
