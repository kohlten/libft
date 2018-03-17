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
	while (*haystack)
	{
		moved = 0;
		j = 0;
		i = 0;
		while (i < len)
		{
			if (needle[i++] == haystack[j++])
				moved++;
		}
		if (moved == len)
			return (1);
		haystack++;
	}
	return (0);
}
