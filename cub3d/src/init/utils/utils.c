/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:12:20 by mmarie            #+#    #+#             */
/*   Updated: 2024/03/07 17:12:54 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/cub3d.h"

int	is_empty(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (!ft_is_space(s[i]))
			return (0);
	return (1);
}

int	in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_info(char *line)
{
	while (ft_is_space(*line))
		line++;
	if (!*line)
		return (1);
	if (!ft_strncmp(line, "EA", 2) || !ft_strncmp(line, "NO", 2)
		|| !ft_strncmp(line, "SO", 2) || !ft_strncmp(line, "WE", 2)
		|| !ft_strncmp(line, "F", 1) || !ft_strncmp(line, "C", 1))
		return (1);
	return (0);
}

char	*dup_line(char *src, int len)
{
	char	*dst;
	int		i ;
	int		j ;

	i = -1;
	dst = ft_calloc(sizeof(char), len);
	while (++i < len - 1)
		dst[i] = 'x';
	i = 0;
	j = -1;
	while (src && src[++j])
	{
		i++;
		if (in_set(src[j], "NWES01"))
			dst[i] = src[j];
	}
	return (dst);
}
