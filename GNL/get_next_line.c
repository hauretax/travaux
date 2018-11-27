/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:59:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/27 16:12:43 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	goodline(char **line,char **sav)
{
	int i;

	i = 0;
		while((*line)[i] != '\n' && (*line)[i])
				i++;
		if ((*line)[i] == '\0')
			return (1);
		if ((*line)[i] == '\n')
		{
			if ((*sav = malloc((ft_strlen(*line) - i + 1) * sizeof(char))) == 0)
				return (0);
			ft_strcpy(*sav, ((*line) + i + 1));
		}
		(*line)[i] = '\0';
	return (1);
}

int	ft_plus(char **sav, char **line)
{
	int i;

	i = 0;
	*line = ft_strjoin_f(*line, *sav);
	if (ft_strstr(*sav, "\n"))
	{
		while(**sav != '\n' && **sav)
				(*sav)++;
		(*sav)++;
		while((*line)[i] != '\n' && (*line)[i])
			i++;
		(*line)[i] = '\0';
		return (1);
	}
	return (0);
}

int get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int 			ret;
	static char		*sav;

	*line = NULL;	
	if (sav)
		if (ft_plus(&sav, line))
			return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		*line = ft_strjoin_f(*line, buf);
		if (ft_strstr(buf, "\n"))
			break ;
	}
	if (ret == 0)
		return (0);
	if (line != NULL)
		return(goodline(line, &sav));
	return (0);
}
