/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 19:21:56 by astrole           #+#    #+#             */
/*   Updated: 2018/03/12 19:21:57 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*out;
	const char	*p;

	if (!s)
		return (NULL);
	out = ft_strnew(len);
	p = s;
	if (!out)
		return (NULL);
	p += start;
	ft_strcpy(out, p);
	out[len] = '\0';
	return (out);
}
