/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 19:20:39 by astrole           #+#    #+#             */
/*   Updated: 2018/03/12 19:20:42 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	out = ft_strnew((s1len + s2len) + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		out[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2len)
		out[i++] = s2[j++];
	out[i] = '\0';
	return (out);
}
