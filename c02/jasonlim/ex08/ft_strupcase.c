/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaslim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:57:51 by jaslim            #+#    #+#             */
/*   Updated: 2023/08/04 13:03:22 by jaslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test0[] = "fucknugget123";
	char	test1[] = "fUcKnUgGeT123";
	char	manual_input[99];

	printf ("passed: \"fucknugget123\", returned: %s\n",
		ft_strupcase(test0));
	printf ("passed: \"fUcKnUgGeT123\", returned: %s\n",
		ft_strupcase(test1));
	printf ("manual input: ");
	scanf ("%s", manual_input);
	printf ("passed: \"%s\", ",
		manual_input);
	printf ("returned: \"%s\"",
		ft_strupcase(manual_input));
	return (0);
}*/
