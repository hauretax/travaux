/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 08:57:26 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/21 14:56:21 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		if_sav(char **line, char **sav)
{
	int i;

	i = 0;

		*line = ft_strjoin_f(*line, *sav);
	if ((*sav = ft_strchr(*sav, '\n')))
	{
		*line = ft_strsub(*line, 0, ft_f_c(*line, '\n'));
		(*sav)++;
	}
}

int			g_n_l(const int fd, char **line, char **sav,char buf[BUFF_SIZE + 1])
{
	int		ret;

	*line = NULL;
	if (*sav)
		if_sav(line, sav);
	if (ft_f_c(*sav, '\n'))//si les \n ne saffiche pas modifier le ft_f_c
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)) && ft_strlen(*sav) == 0)
	{
		buf[ret] = '\0';
		*line = ft_strjoin_f(*line, buf);
		if ((*sav = ft_strchr(*line, '\n')))
		{
			*line = ft_strsub(*line, 0, ft_f_c(*line, '\n'));
			(*sav)++;
			return (1);
		}
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char *sav;
	char buf[BUFF_SIZE + 1];

	if (read(fd, buf, 0))
		return (-1);
	return (g_n_l(fd, line, &sav, buf));
	
}
