/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:58:13 by astrole           #+#    #+#             */
/*   Updated: 2018/02/19 17:58:14 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		ch;
	const char	*p;

	if (n != 0)
	{
		p = s;
		ch = c;
		while (n)
		{
			if (*p++ == ch)
				return ((void *)p - 1);
			n--;
		}
	}
	return (NULL);
}
