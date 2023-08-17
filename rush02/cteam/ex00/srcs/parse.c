/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:06:42 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/13 15:06:43 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*ft_getnb(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		return (NULL);
	read(fd, c, 1);
	while (c[0] == ' ' || c[0] == '\n')
		read(fd, c, 1);
	i = 0;
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

void	skip_char(int fd, char c[1])
{
	read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	if (c[0] == ':')
		read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
}

char	*ft_gettext(int fd, char *c)
{
	int		i;
	char	*str;

	skip_char(fd, c);
	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		if (i > 1)
			if (str[i] == ' ' && str[i - 1] == ' ')
				i--;
		i++;
	}
	i--;
	while (str[i] == ' ')
		i--;
	str[i + 1] = '\0';
	return (str);
}

t_nb_text	*store_nb_text(t_nb_text *arr, int fd, char *c)
{
	unsigned long int	nb;
	char				*text;
	char				*nbstr;
	int					i;

	i = 0;
	while (i < 32)
	{
		nbstr = ft_getnb(fd);
		nb = ft_atoi(nbstr);
		free(nbstr);
		if (!ft_is_valid(nb))
		{
			read(fd, c, 1);
			while (c[0] != '\n')
				read(fd, c, 1);
			continue ;
		}
		if (has_existed(arr, nb, i))
			arr[i].nb = nb;
		text = ft_gettext(fd, c);
		arr[i++].text = ft_strdup(text);
		free(text);
	}
	return (arr);
}

t_nb_text	*parse(char *filename)
{
	int					fd;
	char				c[1];
	t_nb_text			*arr;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 12);
		return (NULL);
	}
	arr = malloc(sizeof(t_nb_text) * 32);
	if (fd == -1 || arr == NULL)
		return (NULL);
	arr = store_nb_text(arr, fd, c);
	close(fd);
	return (arr);
}
