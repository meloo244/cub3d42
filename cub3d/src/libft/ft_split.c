/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:12:20 by mmarie            #+#    #+#             */
/*   Updated: 2024/03/07 17:10:13 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char *str, char c)
{
	int	word;
	int	i;
	int	count;

	word = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			word = 1;
		else
		{
			if (word == 1)
				count++;
			word = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_worddup(char *str, char c, int *index)
{
	char	*ptr;
	int		count;
	int		pos;

	count = 0;
	while (str[*index] == c && str[*index])
		(*index)++;
	pos = *index;
	while (str[*index] != c && str[*index])
	{
		count++;
		(*index)++;
	}
	ptr = malloc(count + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str + pos, count + 1);
	return (ptr);
}

static char	**ft_free(char **ptr, int i)
{
	while (i >= 0)
		free(ptr[i--]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		count;
	int		i;
	int		index;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	count = ft_word((char *)s, c);
	ptr = malloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (NULL);
	while (i < count)
	{
		ptr[i] = ft_worddup((char *)s, c, &index);
		if (!ptr[i])
			return (ft_free(ptr, i));
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
