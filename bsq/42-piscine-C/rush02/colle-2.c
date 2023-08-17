/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 21:08:03 by pforciol          #+#    #+#             */
/*   Updated: 2018/07/22 22:30:40 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char	*ft_rush(char *pattern, int width, int height)
{
	int		w;
	int		h;
	int		i;
	char	*out;

	i = 0;
	h = 0;
	if(!(out = (char*)malloc(sizeof(char) * (width * height + 1))))
		return (0);
	if (width == 0 || height == 0)
		return (0);
	while (h++ < height)
	{
		w = 0;
		while (w++ < width)
		{
			if (h == 1 && w == 1)
				out[i++] = pattern[0];
			else if (h == 1 && w == width)
				out[i++] = pattern[1];
			else if (h == height && w == 1)
				out[i++] = pattern[4];
			else if (h == height && w == width)
				out[i++] = pattern[5];
			else if (w == 1 || w == width)
				out[i++] = pattern[3];
			else if (h == 1 || h == height)
				out[i++] = pattern[2];
			else 
				out[i++] = ' ';
		}
		out[i++] = '\n';
	}
	out[i] = '\0';
	return (out);
}
