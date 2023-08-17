/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:24:56 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/12 15:24:57 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_str_n_copy(char *dest, char *src, int n)
{
	int		index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

char	*ft_extend_array(char *orig, char *n_cont, unsigned int old_len, unsigned int len)
{
	char *dest;

	if (!(dest = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (orig != NULL)
		ft_str_n_copy(dest, orig, old_len);
	ft_str_n_copy(dest + old_len, n_cont, (unsigned int)(len - old_len));
	return (dest);
}

int	load_dict(char *filename)
{
	int		file;
	int		index;
	char	buffer[1024];
	char	content[1024];
	char	byte_read;
	char			*line;
	unsigned int	total;

	total = 0;
	if (filename[0] == '\0')
		filename = "numbers.dict";
	file = open(filename, 00);
	if (file < 0)
		return (0);
	index = 0;

	while ((byte_read = read(file, buffer, sizeof(buffer))) > 0)
	{
		write(1, buffer, sizeof(buffer));
	}
	// ft_close_file(file);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		// if (!str_is_numeric(argv[1]))
		// {
		// 	print_str("Error\n");
		// }
		load_dict("");
	}
	else if (argc == 3)
	{
		// if (!str_is_numeric(argv[1]) || !entry_is_valid(argv[2]))
		// {
		// 	print_str("Error\n");
		// }
		load_dict(argv[2]);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
