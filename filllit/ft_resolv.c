/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:20:25 by lramard           #+#    #+#             */
/*   Updated: 2018/12/11 15:59:57 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_insert(t_grid *grid, t_tetri t, int b[2], int letter)
{
	int i;

	i = -1;
	if (b[1] >= 0 && b[0] >= 0)
	{
		while (++i <= 3)
		{
			if (b[0] + t.map[i][0] >= grid->size || b[0] + t.map[i][0] < 0)
				return (0);
			if (b[1] + t.map[i][1] >= grid->size || b[1] + t.map[i][1] < 0)
				return (0);
			if (grid->grid[b[0] + t.map[i][0]][b[1] + t.map[i][1]] != '.')
				return (0);
		}
	}
	i = -1;
	while (++i <= 3)
		(*grid).grid[b[0] + t.map[i][0]][b[1] + t.map[i][1]] = 'A' + letter;
	return (1);
}

void		ft_burn(t_grid *grid, t_tetri t, int x, int y)
{
	int i;

	i = -1;
	while (++i <= 3)
		(*grid).grid[y + t.map[i][0]][x + t.map[i][1]] = '.';
}

void		ft_bonus(t_grid *grid)
{
	ft_freegrid(grid);
	(*grid).size++;
	*grid = ft_create_grid(*grid);
}

int			ft_fillrec(t_grid *grid, t_tetri *t, int i)
{
	int b[2];

	b[0] = -1;
	if ((*t).tab[0][0] == '\0')
		return (1);
	while (++b[0] <= grid->size)
	{
		b[1] = -1;
		while (++b[1] <= grid->size)
		{
			if (ft_insert(grid, *t, b, i) == 1)
			{
				if (ft_fillrec(grid, t + 1, i + 1))
					return (1);
				ft_burn(grid, *t, b[1], b[0]);
			}
		}
	}
	if (i == 0)
	{
		ft_bonus(grid);
		ft_fillrec(grid, t, 0);
	}
	return (0);
}

t_grid		ft_resolv(t_grid grid, t_tetri *t)
{
	ft_fillrec(&grid, t, 0);
	return (grid);
}
