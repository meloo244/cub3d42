/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:12:20 by mmarie            #+#    #+#             */
/*   Updated: 2024/03/07 17:09:52 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_f;
	char	*src_f;

	dst_f = (char *)dst;
	src_f = (char *)src;
	if (src_f < dst_f)
	{
		while (len > 0)
		{
			len--;
			dst_f[len] = src_f[len];
		}
		return (dst);
	}
	else if (dst_f < src_f)
		ft_memcpy(dst, src, len);
	return (dst);
}
