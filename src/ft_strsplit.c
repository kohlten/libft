/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 20:36:56 by astrole           #+#    #+#             */
/*   Updated: 2018/03/12 20:36:57 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_end(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static int		get_len(const char *s, char c)
{
	int count;
	int not_spliter;

	count = 0;
	not_spliter = 0;
	while (*s != '\0')
	{
		if (not_spliter == 1 && *s == c)
			not_spliter = 0;
		else if (not_spliter == 0 && *s != c)
		{
			not_spliter = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**out;
	int		i;
	int		len;

	len = get_len(s, c);
	out = (char **)malloc((len + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	while (len--)
	{
		while (*s == c && *s)
			s++;
		out[i] = ft_strsub(s, 0, find_end(s, c));
		if (!out[i])
			return (NULL);
		i++;
		s += find_end(s, c);
	}
	out[i] = NULL;
	return (out);
}
