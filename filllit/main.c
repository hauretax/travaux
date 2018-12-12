/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:38:02 by hutricot          #+#    #+#             */
/*   Updated: 2018/12/12 15:00:47 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	init_map(t_tetri *tetri)
{
	int i;
	int y;
	int x;

	x = 0;
	y = 0;
	while (y < 4)
	{
		i = 0;
		while (i < 4)
		{
			if ((*tetri).tab[y][i] == '#')
			{
				(*tetri).map[x][0] = y;
				(*tetri).map[x][1] = i;
				x++;
			}
			i++;
		}
		y++;
	}
	if (x == 4)
		return (0);
	return (1);
}

static int	ft_remap(t_tetri *tetri)
{
	int x;
	int n;
	int tab[2];

	x = 0;
	while (x < 26)
	{
		if (tetri[x].tab[0][0] != '.' && tetri[x].tab[0][0] != '#')
			break ;
		if (init_map(&(tetri[x])))
			return (1);
		tab[0] = tetri[x].map[0][0];
		tab[1] = tetri[x].map[0][1];
		n = 0;
		while (n < 4)
		{
			tetri[x].map[n][0] = tetri[x].map[n][0] - tab[0];
			tetri[x].map[n][1] = tetri[x].map[n][1] - tab[1];
			n++;
		}
		tetri[x].x = 0;
		tetri[x].y = 0;
		x++;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	t_tetri	tetri[27];
	int		fd;
	int		i;
	char	b[1];

	i = -1;
	if (argc != 2)
		return (ft_error(1));
	fd = open(argv[1], O_RDONLY);
	if ((i = good_file(fd, tetri)))
		return (ft_error(0));
	if (read(fd, b, 1))
		return (ft_error(0));
	if (ft_remap(tetri))
		return (ft_error(0));
	init(tetri);
	close(fd);
	return (0);
}
