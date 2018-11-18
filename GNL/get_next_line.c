/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:29:12 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/18 15:25:04 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_f(char *s1, char *s2)
{
	char *str;
	if (s1 == NULL)
	{
		if((str = ft_strdup(s2)) == 0)
			return (0);
		return (str);
	}
	else
	{
		if ((str = ft_strjoin(s1, s2)) == 0)
			return (0);
		free(s1);
		s1 = NULL;
		return (str);
	}
}

int	get_next_line(const int fd, char **line)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	char	*sav;
	int		i;

	i = 0;
	*line = NULL;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		*line = ft_strjoin_f(*line, buf);
		if ((sav = ft_strchr(buf, '\n')))
		{
			while (buf[++i] != '\n')
				;
			*line = ft_strsub(*line, 0, i - 1);
			return (0);
		}
	}
	return (0);
}
