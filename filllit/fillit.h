/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:34:19 by lramard           #+#    #+#             */
/*   Updated: 2018/12/11 13:34:22 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_tetri
{
	char			tab[4][4];
	int				map[4][2];
	int				y;
	int				x;
}					t_tetri;

typedef	struct		s_grid
{
	char			**grid;
	int				size;
}					t_grid;

int					good_file(int fd, t_tetri *tetri);
void				init(t_tetri tetri[27]);
int					ft_freegrid(t_grid *grid);
void				ft_print(t_grid grid);
int					ft_error(int a);
t_grid				ft_creat_grid(t_grid grid);
t_grid				ft_resolv(t_grid grid, t_tetri *t);
t_grid				ft_create_grid(t_grid grid);

#endif
