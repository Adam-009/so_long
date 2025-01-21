/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:28:26 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 15:41:52 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

int	find_c(char *str, t_Coll *coll, int c)
{
	char	**map;
	int		x;
	int		y;

	map = ft_split(str, '\n');
	if (!map)
		return (1);
	y = -1;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
		{
			if (map[y][x] == 'C')
			{
				coll[c].x = x;
				coll[c].y = y;
				free_map(map);
				return (0);
			}
		}
	}
	free_map(map);
	return (1);
}
