/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:13:37 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 16:39:54 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	so_long(char *map)
{
	t_Player	player;
	t_Coll		coll;
	t_Exit		exit;

	ft_printf("%s\n", map);
	if (initialize_value(map, &player, &coll, &exit) == 1)
		return (1);
	if (ft_check_map(map) == 1)
		return (1);
	ft_printf("player: l:%i, h:%i\n", player.x, player.y);
	ft_printf("collectible: l:%i, h:%i, %i\n", coll.x, coll.y, coll.coll_to_find);
	ft_printf("exit: l:%i, h:%i\n", exit.x, exit.y);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*temp;
	char	*map;
	int		fd;

	map = NULL;
	if (argc < 2 || ft_check_file(argv[1]) == 1)
	{
		ft_printf("Error:\nMissing or incorrect file argument.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Error:\nCannot read file.\n");
		return (1);
	}
	while (1)
	{
		temp = get_next_line(fd);
		if (!temp)
			break ;
		map = ft_strjoin_gnl(map, temp);
	}
	free(temp);
	so_long(map);
}
