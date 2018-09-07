/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:10:02 by astrole           #+#    #+#             */
/*   Updated: 2018/06/04 16:10:03 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t num)
{
	int		len;
	char	*result;

	len = ft_strlen(s1) + 1;
	result = ft_memalloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	result = strncpy(result, s1, num);
	return (result);
}
