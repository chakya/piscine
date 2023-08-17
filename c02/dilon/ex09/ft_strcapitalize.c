/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:36:39 by dphang            #+#    #+#             */
/*   Updated: 2023/08/01 10:41:44 by dphang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[0] >= 'a' && str[0] <= 'z')
				|| ((str[i] >= 'a' && str[i] <= 'z')
					&& ((str[i - 1] >= ' ' && str[i - 1] <= '/')
						|| (str[i - 1] >= ':' && str[i - 1] <= '@')
						|| (str[i - 1] >= '[' && str[i - 1] <= '`')
						|| (str[i - 1] >= '{' && str[i - 1] <= '~'))))

						(str[i]<)
			{
				str[i] -= 32;
			}
		}
		i += 1;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[61] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[20] = "HELLO WORLD!";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	printf("%s\n", str2);
	ft_strcapitalize(str2);
	printf("%s\n", str2);
	return (0);
}*/
