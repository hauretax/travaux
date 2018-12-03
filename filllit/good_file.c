/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 11:12:32 by hutricot          #+#    #+#             */
/*   Updated: 2018/12/03 16:14:09 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		realy_good(char tab[4][4])
{
	int i;
	int y;

	i = 0;
	while ()
}

int		good_sqar(char tab[4][4])
{
	int i;
	int y;

	y = 0;
	while (y < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (tab[y][i] != '.' && tab[y][i] != '#')
				return (1);
			i++;
		}
		y++;
	}
	return (0);
}

int		play_again(int fd, char b[4])
{
	if (!(read(fd, b, 1)))
		return (5);
	if (b[0] != '\n')
		return (1);
	return (0);
}

int		good_file(int fd, t_tetri *tetri)
{
	int		i;
	int		x;
	char	b[4];

	i = 0;
	x = 0;
	while (read(fd, b, 4))
	{
		ft_strncpy(tetri[x].tab[i], b, 4);
		i++;
		read(fd, b, 1);
		if (b[0] != '\n')
			return (1);
		if (i == 4)
		{
			i = 0;
			if (play_again(fd, b))
				return (play_again(fd, b));
			x++;
		}
	}
	if (good_sqar(tetri[x].tab))
		return (1);
	tetri[x].tab[i][0] = '\0';
	return (0);
}
