/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:33:22 by lramard           #+#    #+#             */
/*   Updated: 2018/12/12 15:36:09 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_sqrt(int nb)
{
	int last_calcul;
	int current_num;

	current_num = 0;
	last_calcul = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (last_calcul < nb)
		{
			current_num++;
			last_calcul = current_num * current_num;
		}
		if (nb == last_calcul)
			return (current_num);
		else
			return (0);
	}
}

void		init(t_tetri tetri[27])
{
	t_grid	grid;
	int		x;
	int		nb_t;

	nb_t = 0;
	while (tetri[nb_t].tab[0][0] != '.' && tetri[nb_t].tab[0][0] != '#')
		nb_t++;
	nb_t--;
	x = 0;
	grid.size = ft_sqrt(nb_t * 4);
	grid = ft_create_grid(grid);
	grid = ft_resolv(grid, tetri);
	if (grid.grid != NULL)
		ft_print(grid);
	ft_freegrid(&grid);
}
