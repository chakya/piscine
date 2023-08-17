/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:59:34 by achak             #+#    #+#             */
/*   Updated: 2023/08/09 15:45:02 by achak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>

// int	main()
// {
// 	char	*src;
// 	char	*dup;

// 	src = "ifgoshfgoeoafidw";
// 	dup = ft_strdup(src);
// 	printf("src = %s\n", src);
// 	printf("dup = %s\n", dup);
// 	free(dup);
// }
