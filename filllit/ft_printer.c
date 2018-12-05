/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:17:46 by lramard           #+#    #+#             */
/*   Updated: 2018/12/05 13:29:30 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print(t_grid grid)
{
	int	i;
	int	j;

	i = 0;
		while ( i < grid.size)
		{
			j = 0;
			while ( j < grid.size)
			{
				ft_putchar(grid.grid[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
}
