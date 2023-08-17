/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:11:26 by sintan            #+#    #+#             */
/*   Updated: 2023/08/15 21:11:33 by sintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Get length of int to baseto
int	ft_getlength(int base_int, int baset)
{
	int	length;

	length = 0;
	if (base_int < 0)
	{
		base_int *= -1;
		length++;
	}
	while (base_int >= baset)
	{
		base_int /= baset;
		length++;
	}
	length++;
	return (length);
}

// Int to base_to
void	ft_itobase(int base_int, char *base_to, int baset, char *result)
{
	int	i;
	int	length;

	i = 0;
	length = ft_getlength(base_int, baset);
	if (base_int < 0)
	{
		result[0] = '-';
		base_int *= -1;
		i++;
	}
	result[length] = '\0';
	length--;
	while (base_int >= baset)
	{
		result[length] = base_to[base_int % baset];
		base_int /= baset;
		length--;
	}
	if (base_int < baset)
		result[i] = base_to[base_int];
}
