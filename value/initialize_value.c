/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:44:07 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 16:39:11 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	initialize_value(char *str, t_Player *player, t_Coll *coll, t_Exit *exit)
{
	int			c;

	c = count_coll(str);
	coll->coll_to_find = c;
	if (find_p(str, player) == 1)
	{
		ft_printf("Error:\nInvalide player start.\n");
		return (1);
	}
	if (find_c(str, coll, c) == 1)
	{
		ft_printf("Error:\nInvalide collectible(s).\n");
		return (1);
	}
	if (find_e(str, exit) == 1)
	{
		ft_printf("Error:\nInvalide exit.\n");
		return (1);
	}
	return (0);
}
