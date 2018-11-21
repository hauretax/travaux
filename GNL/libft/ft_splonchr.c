/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splonchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:54:44 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/21 14:30:31 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_splonchr(char **line, char **sav, char *buf)
{
	int i;

	i = 0;
	if (*line == NULL || *sav == NULL || buf == NULL)
		return (0);
	*line = ft_strjoin_f(*line, buf);
	if ((*sav = ft_strchr(*line, '\n')))
	{
		*line = ft_strsub(*line, 0, ft_f_c(*line, '\n'));
		(*sav)++;
		return (1);
	}
	return (0);
}
