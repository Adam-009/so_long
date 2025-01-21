/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:33:56 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 15:17:41 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	find_e(char *str, t_Exit *exit)
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
			if (map[y][x] == 'E')
			{
				exit->x = x;
				exit->y = y;
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
