/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 11:12:32 by hutricot          #+#    #+#             */
/*   Updated: 2018/12/05 15:32:26 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		many_link(char tab[4][4], int i, int y)
{
	int h;

	h = 0;
	if (y < 3 && tab[y + 1][i] == '#')
		h++;
	if (i < 3 && tab[y][i + 1] == '#')
		h++;
	if (i > 0 && tab[y][i - 1] == '#')
		h++;
	if (y > 0 && tab[y - 1][i] == '#')
		h++;
	return (h);
}

int		realy_good(char tab[4][4])
{
	int t[5];

	t[4] = 0;
	t[3] = 0;
	t[0] = 0;
	t[1] = 0;
	while (t[3] < 4)
	{
		t[2] = 0;
		while (t[2] < 4)
		{
			if (tab[t[3]][t[2]] == '#')
			{
				if (!(t[4] = many_link(tab, t[2], t[3])))
					return (1);
				t[0] += t[4];
				t[1]++;
			}
			t[2]++;
		}
		t[3]++;
	}
	if ((t[0] != 6 && t[0] != 8) || t[1] != 4)
		return (1);
	return (0);
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
	if (realy_good(tab))
		return (1);
	return (0);
}

int		play_again(int fd, char b[4])
{
	if (!(read(fd, b, 1)))
		return (0);
	if (b[0] != '\n')
		return (1);
	b[0] = '.';
	return (0);
}

int		good_file(int fd, t_tetri *tetri)
{
	int		i;
	int		x;
	char	b[4];

	i = 0;
	x = 0;
	while (read(fd, b, 4) && x < 27)
	{
		ft_strncpy(tetri[x].tab[i], b, 4);
		i++;
		read(fd, b, 1);
		if (b[0] != '\n')
			return (1);
		if (i == 4)
		{
			if ((i = play_again(fd, b)))
				return (play_again(fd, b));
			i = 0;
			if (good_sqar(tetri[x].tab))
				return (1);
			x++;
		}
	}
	if (x == 27 || b[0] != '\n')
		return (1);
	return (0);
}
