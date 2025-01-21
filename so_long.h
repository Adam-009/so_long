/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:33:50 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 16:32:46 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "my_libft/libft.h"
# include <fcntl.h>
# include "value/structur.h"
# include "./minilibx-linux/mlx.h"

int	flood_fill(char *str);
int	count_coll(char *map);
int	ft_check_file(const char *file);
int	ft_check_map(char *str);
int	ft_2dview(char *map);
int	initialize_value(char *str, t_Player *player, t_Coll *coll, t_Exit *exit);

#endif