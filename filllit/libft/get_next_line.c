/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:59:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/29 13:57:06 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free(char *s1, char *s2)
{
	if (s1 != NULL)
	{
		free(s1);
		s1 = NULL;
	}
	if (s2 != NULL)
	{
		free(s2);
		s2 = NULL;
	}
	return (0);
}

static char	*ft_strjoin_f(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL)
	{
		if ((str = ft_strdup(s2)) == 0)
			return (0);
		return (str);
	}
	else
	{
		if ((str = ft_strjoin(s1, s2)) == 0)
			return (0);
		ft_free(s1, NULL);
		return (str);
	}
}

static int	goodline(char **line, char **sav)
{
	int i;

	i = 0;
	while ((*line)[i] != '\n' && (*line)[i])
		i++;
	if ((*line)[i] == '\0')
		return (1);
	if ((*line)[i] == '\n')
	{
		if ((*sav = malloc((ft_strlen(*line) - i + 1) * sizeof(char))) == 0)
			return (ft_free(*line, NULL));
		ft_strcpy(*sav, ((*line) + i + 1));
	}
	(*line)[i] = '\0';
	return (1);
}

static int	ft_plus(char **sav, char **line)
{
	int i;

	i = 0;
	if ((*line = ft_strjoin_f(*line, *sav)) == 0)
		return (ft_free(*sav, *line));
	if (ft_strstr(*sav, "\n"))
	{
		while (**sav != '\n' && **sav)
			(*sav)++;
		(*sav)++;
		while ((*line)[i] != '\n' && (*line)[i])
			i++;
		(*line)[i] = '\0';
		return (1);
	}
	while (**sav)
		(*sav)++;
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	static char		*sav;

	if (read(fd, buf, 0) || BUFF_SIZE <= 0 || !line)
		return (-1);
	*line = NULL;
	if (sav)
		if (ft_plus(&sav, line))
			return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if ((*line = ft_strjoin_f(*line, buf)) == NULL)
			return (ft_free(*line, NULL));
		if (ft_strstr(buf, "\n"))
			break ;
	}
	if (ret == 0 && (ft_strlen(*line) == 0))
		return (0);
	if (line != NULL)
		return (goodline(line, &sav));
	return (0);
}
