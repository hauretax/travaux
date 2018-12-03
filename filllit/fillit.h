/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:00:50 by lramard           #+#    #+#             */
/*   Updated: 2018/12/03 16:14:14 by hutricot         ###   ########.fr       */
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
	char			**grid[0][0];
	size_t			size;
}					t_grid;

int	good_file(int fd, t_tetri *tetri);

#endif
