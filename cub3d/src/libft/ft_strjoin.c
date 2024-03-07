/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:12:20 by mmarie            #+#    #+#             */
/*   Updated: 2024/03/07 17:10:28 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2, int free)
// {
// 	char	*final_str;
// 	size_t	total_len;
// 	int		i;

// 	if (!s1 || !s2)
// 		return (0);
// 	i = 0;
// 	total_len = ft_strlen(s1) + ft_strlen(s2);
// 	final_str = malloc(sizeof(char) * (total_len + 1));
// 	if (!final_str)
// 		return (0);
// 	ft_strcpy(final_str + i, s1);
// 	i = ft_strlen(final_str);
// 	ft_strcpy(final_str + i, s2);
// 	return (final_str);
// }
