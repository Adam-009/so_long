/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi-- <asaadi--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:17:16 by asaadi--          #+#    #+#             */
/*   Updated: 2025/01/20 17:12:05 by asaadi--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_file(const char *file)
{
	const char	*ext;
	int			file_len;
	int			ext_len;

	ext = ".ber";
	file_len = ft_strlen(file);
	ext_len = ft_strlen(ext);
	if (file_len < ext_len)
		return (1);
	while (ext_len > 0)
	{
		if (file[file_len - 1] != ext[ext_len - 1])
			return (1);
		file_len--;
		ext_len--;
	}
	return (0);
}
