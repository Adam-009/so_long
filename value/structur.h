/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structur.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:38:40 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 15:38:13 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTUR_H
# define STRUCTUR_H

typedef struct s_Player
{
	int	x;
	int	y;
	int	coll;
}	t_Player;
int	find_p(char *str, t_Player *player);

typedef struct s_Coll
{
	int	x;
	int	y;
	int	coll_to_find;
}	t_Coll;
int	find_c(char *str, t_Coll *coll, int c);

typedef struct s_Exit
{
	int	x;
	int	y;
}	t_Exit;
int	find_e(char *str, t_Exit *exit);

#endif