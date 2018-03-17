/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 19:25:48 by astrole           #+#    #+#             */
/*   Updated: 2018/03/15 19:25:49 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *arr, int len)
{
	int		i;
	char	temp;

	i = 0;
	while (i <= len / 2)
	{
		temp = arr[i];
		arr[i] = arr[len - i];
		arr[len - i] = temp;
		i++;
	}
	return (arr);
}
