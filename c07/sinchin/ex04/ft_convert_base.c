/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:32:44 by agan              #+#    #+#             */
/*   Updated: 2023/08/16 20:35:46 by sintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_convert_base2.c"
// void	ft_itobase(int base_int, char *base_to, int baset, char *result);
// int		ft_getlength(int base_int, int baset);

// Checks if base is valid and returns basevalue
int	ft_checkbase(char *s)
{
	int	i;
	int	j;
	int	basevalue;

	i = -1;
	basevalue = 0;
	while (s[++i])
	{
		if (s[i] == '+' || s[i] == '-')
			return (0);
		if (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
			return (0);
	}
	basevalue = i;
	i = -1;
	while (s[++i])
	{
		j = i;
		while (s[++j])
		{
			if (s[i] == s[j])
				return (0);
		}
	}
	return (basevalue);
}

// Get base index of char
int	ft_getnb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

// Str to int
int	ft_basetoi(char *base_from, int basef, char *nbr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nbr == 32 || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr)
	{
		if (ft_getnb(*nbr, base_from) != -1)
			num = num * basef + ft_getnb(*nbr, base_from);
		else
			return (num * sign);
		nbr++;
	}
	return (num * sign);
}

// Int to other base
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		basef;
	int		baset;
	int		base_int;
	char	*result;

	basef = ft_checkbase(base_from);
	baset = ft_checkbase(base_to);
	if (basef <= 1 || baset <= 1)
		return (NULL);
	base_int = ft_basetoi(base_from, basef, nbr);
	result = malloc(sizeof(char) * ft_getlength(base_int, baset) + 1);
	if (result == NULL)
		return (0);
	ft_itobase(base_int, base_to, baset, result);
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	char *s;
	char base_from[] = "0123456789abcdef";
	char base_to[] = "01";
	s = ft_convert_base("11", base_from, base_to);
	printf("fx returns %s\n", s);
	free(s);
} */
