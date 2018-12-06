/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:00:50 by lramard           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/12/03 16:14:14 by hutricot         ###   ########.fr       */
=======
/*   Updated: 2018/12/05 11:54:42 by lramard          ###   ########.fr       */
>>>>>>> 844d4a570c9af22075d70d45066b6c6da06091fa
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
char	**ft_create_grid(t_grid grid);
int		ft_freegrid(t_grid grid);
t_grid	ft_resolv(t_grid grid, t_tetri tetri[27]);
void	ft_print(t_grid grid);

#endif
