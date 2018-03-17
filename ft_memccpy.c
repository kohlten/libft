/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:54:39 by astrole           #+#    #+#             */
/*   Updated: 2018/02/19 14:54:40 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	unsigned char		*d;
	const unsigned char	*s;

	if (n)
	{
		i = 0;
		d = dst;
		s = src;
		while (n)
		{
			d[i] = s[i];
			if (d[i] == (unsigned char)c)
				return (dst + i + 1);
			i++;
			n--;
		}
	}
	return (NULL);
}
