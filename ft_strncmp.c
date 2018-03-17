/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 22:13:25 by astrole           #+#    #+#             */
/*   Updated: 2018/01/15 22:13:26 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n))
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	if (((s1[i] == '\0') && (s2[i] == '\0')) || (i == n))
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
