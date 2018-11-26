/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 08:57:26 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/26 13:43:54 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		bonus(char **line, char **sav)
{
	char	*str;

	str = ft_strdup(*line);
	ft_free(*line, NULL);
	*line = ft_strsub(str, 0, ft_f_c(*line, '\n'));
	if (str[0] == '\n')
	{
		*line = (char *)malloc(1);
		*sav = ft_strdup(str);
	}
	ft_free(str, NULL);
	(*sav)++;
	return (1);
}

static int		g_n_l(const int fd, char **line, char **sav,
					char buf[BUFF_SIZE + 1])
{
	int		ret;

	*line = NULL;
	if (*sav)
		ft_splonchr(line, sav, *sav);
	if (ft_f_c(*sav, '\n'))
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		*line = ft_strjoin_f(*line, buf);
		if ((*sav = ft_strchr(*line, '\n')))
			return (bonus(line, sav));
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*sav;
	char		buf[BUFF_SIZE + 1];
	int			i;

	i = 0;
	if (read(fd, buf, 0))
		return (-1);
	i = g_n_l(fd, line, &sav, buf);
	if (*line != NULL)
		if (*line[0] != '\0')
			i = 1;
	if (ft_strequ(*line, "\n"))
		*line = (char *)malloc(1);
	if (i == 0)
		ft_free(sav, NULL);
	return (i);
}
