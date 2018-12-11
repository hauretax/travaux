/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:33:22 by lramard           #+#    #+#             */
/*   Updated: 2018/12/11 13:12:58 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include "fillit.h"

void	init(t_tetri tetri[27])
{
	t_grid grid;
	int x;
	
	x = 0;
	grid.size = 2;
	grid = ft_create_grid(grid);
	grid = ft_resolv(grid, tetri);
	if (grid.grid != NULL)
		ft_print(grid);
	ft_freegrid(&grid);
}
