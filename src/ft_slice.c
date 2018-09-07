/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 20:37:09 by astrole           #+#    #+#             */
/*   Updated: 2018/03/12 20:37:10 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_slice(void *arr, size_t begin, size_t end)
{
	char	*out;
	size_t	i;
	char	*p;

	out = (char *)malloc(((end - begin) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	p = arr;
	i = begin;
	while (i < end)
	{
		out[i - begin] = p[i];
		i++;
	}
	out[i - begin] = '\0';
	return ((void *)out);
}
