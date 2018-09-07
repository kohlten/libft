/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 23:22:42 by astrole           #+#    #+#             */
/*   Updated: 2018/08/16 23:22:44 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(char *s)
{
	double	out;
	int		counting;
	int		places;
	int		i;

	out = 0.0;
	places = 0;
	counting = 0;
	i = -1;
	while (s[++i] && ((s[i] <= '9' && s[i] >= '0') || s[i] == '.'))
	{
		if (s[i] != '.')
		{
			out *= 10;
			out += (s[i] - 48);
			if (counting)
				places += 1;
		}
		else
			counting = 1;
	}
	i = -1;
	while (++i < places)
		out /= 10;
	return (out);
}
