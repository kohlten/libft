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

static int        find_end(int start, const char *s, char sep)
{
	while (s[start] == sep && s[start])
		start++;
    while (s[start] != sep && s[start])
        start++;
    return (start);
}

static int        get_len(char const *s, char c)
{
	int i;

	i = 0;
    while (*s == c)
    	s++;
    while (*s)
    {
    	while (*s && *s != c)
    		s++;
    	while (*s == c)
    		s++;
    	i++;
    }
    return (i);
}

char            **ft_strsplit(char const *s, char c)
{
	char **out;
	int i;

	if (!s || !c)
        return (NULL);
    out = (char **)malloc((get_len(s, c) + 1) * sizeof(char *));
    if (!out)
        return (NULL);
    i = 0;
    while (*s)
    {
    	if (find_end(0, s, c) > 0)
    		out[i++] = (char *)ft_slice((void *)s, 0, find_end(0, s, c));
    	s++;
    }
    out[i] = NULL;
    return (out);
}

/*char            **ft_strsplit(char const *s, char c)
{
    int        i;
    int        j;
    char    **out;

    if (!s || !c)
        return (NULL);
    out = (char **)malloc((get_len(s, c) + 1) * sizeof(char *));
    if (!out)
        return (NULL);
    i = -1;
    j = 0;
    while (s[++i])
    {
        if (s[i] == c)
        {
            while (s[i] == c)
                i++;
            if ((i - find_end(i, s, c)) > 0 || (i == 1 && s[i - 1] == c))
                out[j++] = (char *)ft_slice((void *)s, i, find_end(i, s, c));
        }
        else if (i == 0)
            out[j++] = (char *)ft_slice((void *)s, i, find_end(i, s, c));
    }
    out[j] = NULL;
    return (out);
}*/