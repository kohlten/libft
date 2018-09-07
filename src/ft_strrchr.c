/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:47:33 by astrole           #+#    #+#             */
/*   Updated: 2018/02/20 15:47:38 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*p;
	int		i;

	ch = c;
	p = (char *)s;
	i = ft_strlen(p) + 1;
	while (*p)
		p++;
	while (1)
	{
		if (*p == ch)
			return (p);
		else if (i <= 0)
			return (NULL);
		p--;
		i--;
	}
	return (NULL);
}
