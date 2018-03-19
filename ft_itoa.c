/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 21:00:51 by astrole           #+#    #+#             */
/*   Updated: 2018/03/12 21:00:51 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	find_len(int n)
{
	int len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*out;
	int		i;
	int		neg;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0 && (neg = 1))
		n *= -1;
	out = ft_strnew(find_len(n) + 1);
	if (!out)
		return (NULL);
	i = 0;
	if (n == 0)
		out[i++] = '0';
	while (n > 0)
	{
		out[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		out[i++] = '-';
	out[i] = '\0';
	return (ft_strrev(out, i - 1));
}
