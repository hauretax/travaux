/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:31:04 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/21 14:55:10 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_f(char *s1, char *s2)
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
		free(s1);
		s1 = NULL;
		return (str);
	}
}