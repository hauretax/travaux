/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 08:57:26 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/22 17:08:30 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			g_n_l(const int fd, char **line, char **sav,
				char buf[BUFF_SIZE + 1])
{
	int		ret;

	*line = NULL;
	if (*sav)
		ft_splonchr(line, sav, *sav);
	if (ft_f_c(*sav, '\n'))
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)) && ft_strlen(*sav) == 0)
	{
		buf[ret] = '\0';
		*line = ft_strjoin_f(*line, buf);
		ft_free(*sav, NULL);
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
	static char	*sav;
	char		buf[BUFF_SIZE + 1];
	int			i;

	if (read(fd, buf, 0))
		return (-1);
	i = g_n_l(fd, line, &sav, buf);
	if (ft_strequ(*line, "\n"))
		*line = (char *)malloc(1);
	if (i == 0)
		ft_free(sav, NULL);
	return (i);
}
