/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:44:51 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 16:32:52 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_coll(char *map)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (map[i])
	{
		if (map[i] == 'C')
			c++;
		i++;
	}
	return (c);
}
