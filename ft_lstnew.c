/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 03:46:37 by astrole           #+#    #+#             */
/*   Updated: 2018/03/17 03:46:38 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *out;

	out = (t_list*)malloc(sizeof(t_list));
	if (!out)
		return (NULL);
	if (!content)
	{
		out->content = NULL;
		out->content_size = 0;
	}
	else
	{
		out->content = malloc(content_size);
		out->content = ft_memcpy(out->content, content, content_size);
		out->content_size = content_size;
	}
	out->next = NULL;
	return (out);
}
