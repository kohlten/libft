/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <astrole@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:54:28 by astrole           #+#    #+#             */
/*   Updated: 2018/02/21 14:54:30 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *mem;

	mem = (char *)malloc(sizeof(char) * size + 1);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size + 1);
	return (mem);
}
