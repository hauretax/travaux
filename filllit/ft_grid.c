/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:33:08 by lramard           #+#    #+#             */
/*   Updated: 2018/12/11 11:04:07 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_freegrid(t_grid *grid)
{
	int i;

	i = 0;
	if ((*grid).size <= 0 || (*grid).grid == NULL)
		return (0);
	while (i < (*grid).size)
	{
		free((*grid).grid[i]);
		(*grid).grid[i] = NULL;
		i++;
	}
	free((*grid).grid);
	(*grid).grid = NULL;
	return (1);
}
