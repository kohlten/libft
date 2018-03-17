/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 19:20:16 by astrole           #+#    #+#             */
/*   Updated: 2018/03/12 19:20:18 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*out;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = -1;
	while ((s[++i] == ' ' || s[i] == '\t' || s[i] == '\n') && len > 0)
		len--;
	out = ft_strnew(len);
	if (!out)
		return (NULL);
	j = 0;
	while (j < len)
		out[j++] = s[i++];
	out[j] = '\0';
	return (out);
}
