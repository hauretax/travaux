/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:20:25 by lramard           #+#    #+#             */
/*   Updated: 2018/12/05 11:54:38 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fillit.h"
t_grid		ft_resolv(t_grid grid, t_tetri tetri[27])
{
	int	i;
	int j;

	i = 0;
	while (i < grid.size)
	{
		j = 0;
		while (j < grid.size)
		{
			grid.grid[i][j] = tetri[0].tab[i][j];
			j++;
		}
		i++;
	}
}
