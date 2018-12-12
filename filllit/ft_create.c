/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:30:46 by lramard           #+#    #+#             */
/*   Updated: 2018/12/12 12:29:25 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_full(int size, t_grid grid)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			grid.grid[i][j] = '.';
			j++;
		}
		i++;
	}
}

t_grid		ft_create_grid(t_grid grid)
{
	int i;

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
	ft_full(grid.size, grid);
	return (grid);
}
