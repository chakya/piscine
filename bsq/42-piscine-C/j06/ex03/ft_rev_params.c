/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 03:47:35 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/16 03:53:38 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int arg;
	int i;

	arg = argc - 1;
	while (arg > 0)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			ft_putchar(argv[arg][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		arg--;
	}
	return (0);
}
