/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:27:28 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 15:24:13 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	find_p(char *str, t_Player *player)
{
	char	**map;
	int		x;
	int		y;

	map = ft_split(str, '\n');
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == 'P')
			{
				player->x = x;
				player->y = y;
				free(map);
				return (0);
			}
			x++;
		}
		y++;
	}
	free(map);
	return (1);
}
