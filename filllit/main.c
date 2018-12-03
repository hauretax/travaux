/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:38:02 by hutricot          #+#    #+#             */
/*   Updated: 2018/12/03 16:14:16 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		print_test(t_tetri tetri[27])
{
	int i;
	int y;
	int x;

	x = 0;
	while (x < 26)
	{
		y = 0;
		while (y < 4)
		{
			i = 0;
			while (i < 4)
			{
				ft_putchar(tetri[x].tab[y][i]);
				i++;
			}
			ft_putchar('\n');
			y++;
			if (tetri[x].tab[y][0] == '\0')
				return ;
		}
		x++;
	}
}

int			main(int argc, char **argv)
{
	t_tetri	tetri[27];
	int		fd;
	int		i;

	if (argc != 2)
	{
		write(2, "usage: ./fillit source_file\n", 28);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if ((i = good_file(fd, tetri)) && i != 5)
		return (0);
	print_test(tetri);
	close(fd);
	return (0);
}
