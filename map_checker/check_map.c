/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:33:53 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/21 14:34:59 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_cep(char *str)
{
	int	i;
	int	e;
	int	c;
	int	p;

	e = 0;
	c = 0;
	p = 0;
	i = 0;
	while (str[i++])
	{
		if (str[i] == 'E')
			e++;
		if (str[i] == 'P')
			p++;
		if (str[i] == 'C')
			c++;
	}
	if (e != 1)
		return (1);
	if (p != 1)
		return (1);
	if (c < 1)
		return (1);
	return (0);
}

int	check_border(char *str)
{
	int		i;
	int		j;
	size_t	map_size;
	char	**map;

	map = ft_split(str, '\n');
	map_size = ft_strlen(map[0]);
	j = -1;
	while (map[0][j++])
		if (map[0][j] != '1')
			return (1);
	i = 1;
	while (map[i + 1])
	{
		if (map[i][0] != '1' || map[i][map_size - 1] != '1' ||
			ft_strlen(map[i]) != map_size)
			return (1);
		i++;
	}
	j = -1;
	while (map[i][j++])
		if (map[i][j] != '1')
			return (1);
	return (0);
}

int	check_ec(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '1' && str[i] != '0' && str[i] != 'E'
			&& str[i] != 'P' && str[i] != 'C' && str[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_map(char *str)
{
	if (check_ec(str) == 1)
	{
		ft_printf("Error:\nInvalide caractere in map.\n");
		return (1);
	}
	if (check_border(str) == 1)
	{
		ft_printf("Error:\nInvalide border map.\n");
		return (1);
	}
	if (check_cep(str) == 1)
	{
		ft_printf("Error:\nInvalide CEP.\n");
		return (1);
	}
	return (0);
}
