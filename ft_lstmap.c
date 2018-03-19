/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 03:48:03 by astrole           #+#    #+#             */
/*   Updated: 2018/03/17 03:48:04 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *next;
	t_list *head;

	if (!lst || !f)
		return (NULL);
	next = f(lst);
	new = ft_lstnew(next->content, next->content_size);
	if (!new)
		return (NULL);
	head = new;
	next = lst->next;
	while (next)
	{
		next = f(next);
		new->next = ft_lstnew(next->content, next->content_size);
		if (!new->next)
			return (NULL);
		new = new->next;
		next = next->next;
	}
	return (head);
}
