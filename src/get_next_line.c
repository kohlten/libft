/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 19:25:34 by astrole           #+#    #+#             */
/*   Updated: 2018/06/05 19:25:35 by astrole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		read_line(const int fd, char **cache)
{
	char	tmp[BUFF_SIZE + 1];
	int		nread;
	int		i;
	int		total;

	total = 0;
	while ((nread = read(fd, tmp, BUFF_SIZE)))
	{
		i = ft_strlen(*cache);
		if (nread < 0)
			return (nread);
		tmp[nread] = '\0';
		total += nread;
		*cache = ft_realloc(*cache, (i + nread) + 1 * sizeof(char),
			(i + 1) * sizeof(char));
		if (!*cache)
			return (-1);
		*cache = ft_strcat(*cache, tmp);
		if (ft_strchr(tmp, '\n'))
			break ;
	}
	return (total);
}

static char		*move_forward(char **cache)
{
	char	*out;
	char	*tmp;
	char	*new;
	int		len;

	len = ft_canfind(*cache, "\n");
	if (len == -1)
	{
		len = ft_strlen(*cache);
		tmp = (*cache) + (len);
	}
	else
		tmp = (*cache) + (len + 1);
	out = ft_strsub(*cache, 0, len);
	new = ft_strdup(tmp);
	free(*cache);
	*cache = new;
	return (out);
}

int				get_next_line(const int fd, char **line)
{
	static char	*cache;
	int			out;

	if (fd < 0 || line == NULL || read(fd, 0, 0) < 0)
		return (-1);
	if ((out = read_line(fd, &cache)) < 0)
		return (-1);
	if (out < BUFF_SIZE && !ft_strlen(cache))
		return (0);
	*line = move_forward(&cache);
	return (1);
}
