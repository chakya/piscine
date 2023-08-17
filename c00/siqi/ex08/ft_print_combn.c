/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:12:58 by cwijaya           #+#    #+#             */
/*   Updated: 2023/07/31 17:13:04 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar (v[i++]);
		write (1, ".\n", 2);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write (1, ", ", 2);
}

void	print(void)
{
	while (v[0] != v_max[0])
	{
		flag = n - 1;
		while (v[flag] == v_max[flag])
			--flag;
		base = ++(v[flag]);
		while (flag < n)
			v[++flag] = ++base;
		print_array (v, n, v_max[0]);
	}
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int		flag;
	int		base;
	int		i;

	if (n <= 0 || n > 10)
	{
		write (1, "Insert an 0<n<10\n", 17);
		return ;
	}
	i = 0;
	while (i < 1000)
	{
		v[i] = 1 + 48;
		v_max[i] = (10 - n) + i + 48;
	}
	print_array(v, n, v_max[0]);
}

int	main(void)
{
	ft_print_combn(3);
	write (1, "\n1\n", 0);
	ft_print_combn(1);
	write (1, "\n2\n", 3);
}
