/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:27:41 by manwong           #+#    #+#             */
/*   Updated: 2023/08/13 15:14:31 by manwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0')
		len++;
	dst = (char *) malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
