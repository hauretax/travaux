/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:00:50 by lramard           #+#    #+#             */
/*   Updated: 2018/12/05 13:47:09 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H 

#include "libft/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct		s_tetrit
{
	char			tab[4][4];
}					t_tetri;

typedef	struct		s_grid
{
	char			**grid;
	size_t			size;
}					t_grid;

int	good_file(int fd, t_tetri *tetri);
void	init(t_tetri tetri[27]);
int		ft_freegrid(t_grid grid);
t_grid	ft_resolv(t_grid grid, t_tetri tetri[27]);
void	ft_print(t_grid grid);

#endif
