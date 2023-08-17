/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 02:14:30 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/13 04:45:07 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char	*alphabet;
	char	*alphab42;
	int		i;
	int		j;

	alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	alphab42 = "qrstuvwxyzabcdefghijklmnopQRSTUVWXYZABCDEFGHIJKLMNOP";
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			while (str[i] != alphabet[j])
				j++;
			if (str[i] == alphabet[j])
				str[i] = alphab42[j];
		}
		i++;
	}
	return (str);
}
