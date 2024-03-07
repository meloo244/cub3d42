/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:12:20 by mmarie            #+#    #+#             */
/*   Updated: 2024/03/07 17:10:16 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;

	str = (char *) s;
	i = 0;
	while (str[i])
	{
		if (s[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (0);
}

int	ft_strchr_index(const char *s, char *c)
{
	int		i;
	int		j;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i])
	{
		j = -1;
		while (c[++j])
			if (s[i] == c[j])
				return (i);
		i++;
	}
	return (-1);
}
