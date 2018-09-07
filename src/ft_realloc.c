/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:44:05 by hjo               #+#    #+#             */
/*   Updated: 2018/03/26 22:44:07 by hjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size, size_t prev_size)
{
	void	*newptr;

	if (!ptr)
	{
		newptr = ft_memalloc(size);
		return (newptr);
	}
	newptr = ft_memalloc(size);
	if (!newptr)
		return (NULL);
	if (prev_size <= size)
		newptr = ft_memcpy(newptr, ptr, prev_size);
	else
		newptr = ft_memcpy(newptr, ptr, size);
	free(ptr);
	return (newptr);
}
