/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:08:06 by ybel-hac          #+#    #+#             */
/*   Updated: 2024/03/07 16:59:43 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/cub3d.h"

int	main(int ac, char **av)
{
	t_cub3d	cub;

	if (!check_args(&cub, ac, av[1]))
		exit(EXIT_FAILURE);
	init_cub(&cub, av[1]);
	draw_2dmap(&cub);
	free_utils(cub);
	return (0);
}
