/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:33:22 by lramard           #+#    #+#             */
/*   Updated: 2018/12/05 13:55:22 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include "fillit.h"
int			ft_freegrid(t_grid grid)
{
	int	i;

	i = 0;
	if (grid.size <= 0 || grid.grid == NULL)
		return (0);
	while (i != grid.size)
	{
		free(grid.grid[i]);
		ft_bzero(grid.grid[i],grid.size);
		i++;
	}
	return (1);
}

t_grid		ft_create_grid(t_grid grid)
{
	int	i;

	i = 0;
	if (grid.size <= 0)
		return (grid);
	if (!(grid.grid = (char **)malloc(sizeof(char *) * (grid.size + 1))))
		return (grid);
	while (i < grid.size)
	{
		if (!(grid.grid[i] = (char *)malloc(sizeof(char) * (grid.size + 1))))
			return (grid);
		grid.grid[i][grid.size] = '\0';
		i++;
	}
	return (grid);
}


void	init(t_tetri tetri[27])
{
	t_grid grid;

	grid.size = 4;
	grid = ft_create_grid(grid);
	grid = ft_resolv(grid, tetri);
	if (grid.grid != NULL)
		ft_print(grid);
	ft_freegrid(grid);
}
