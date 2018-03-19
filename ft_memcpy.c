/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:32:08 by astrole           #+#    #+#             */
/*   Updated: 2018/02/19 13:32:09 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (len == 0 || src == dst)
		return (dst);
	else
	{
		d = dst;
		s = src;
		while (len)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
		return (dst);
	}
}
