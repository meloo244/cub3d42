/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:46:43 by mmarie            #+#    #+#             */
/*   Updated: 2024/03/07 16:54:41 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/cub3d.h"

int	my_abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

char	*get_info_value(t_cub3d *cub, const char *id)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (ft_strcmp(cub->info[i].id, id))
			return (cub->info[i].content);
		i++;
	}
	return (0);
}

void	ft_swap(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}
