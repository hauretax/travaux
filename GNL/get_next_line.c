/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:29:12 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/20 17:25:08 by hutricot         ###   ########.fr       */
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

void	 if_sav(char **line, char **sav)
{
	int i;

	i = 0;

		*line = ft_strjoin_f(*line, *sav);
	if ((*sav = ft_strchr(*sav, '\n')))
	{
		while ((*line)[i++] != '\n' && (*line)[i] !='\0')
			;
		*line = ft_strsub(*line, 0, i - 1);
		printf("COUCOU");
	}
}

int	get_next_lin(const int fd, char **line, char **sav)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	int		i;

	*line = NULL;
	if (*sav)
		if_sav(line, sav);
	i = 0;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		*line = ft_strjoin_f(*line, buf);
		if ((*sav = ft_strchr(*line, '\n')))
		{
			while ((*line)[i++] != '\n' && (*line)[i] !='\0')
				;
			*line = ft_strsub(*line, 0, i - 1);
			(*sav)++;;
			return (0);
		}
	}
	return (0);
}

int get_next_line(const int fd, char **line)
{
	static char *sav;
	return (get_next_lin(fd, line, &sav));
	
}
