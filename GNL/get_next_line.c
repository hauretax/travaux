/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:59:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/26 18:29:05 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	goodline(char **line,char **sav)
{
	char *str;
	int i;

	i = 0;
	if((str = (char *)malloc(sizeof(char) * (1 + ft_strlen(*line)))) == 0)
		return (0);
//	while(str[i])
//		i++;
	return (1);
}


int get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int 			ret;
	static char		*sav;

	*line = NULL;
	if (sav != NULL)
		goodline(line, &sav);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
	printf("YOOOO\n");
		buf[ret] = '\0';
		*line = ft_strjoin_f(*line, buf);
		if (ft_strstr(buf, "\n"))
		{	
			sav = ft_strchr(*line, '\n');
			break ;
		}
	}
	if (ret == 0)
		return (0);
	if (line != NULL)
		return(goodline(line, &sav));
	return (0);
}
