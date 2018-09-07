/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_canfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 19:21:09 by astrole           #+#    #+#             */
/*   Updated: 2018/03/12 19:21:15 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_canfind(char *haystack, char *needle)
{
	size_t moved;
	size_t len;
	size_t i;
	size_t j;

	len = ft_strlen(needle);
	i = 0;
	while (haystack[i])
	{
		moved = 0;
		j = 0;
		while (j < len)
		{
			if (needle[j] == haystack[i + j])
				moved++;
			j++;
		}
		if (moved == len)
			return (i);
		i++;
	}
	return (-1);
}
