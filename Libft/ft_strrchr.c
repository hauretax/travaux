/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:15:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/14 11:50:42 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*s1;
	int		sav;

	s1 = (char *)s;
	i = 0;
	sav = -1;
	while (s1[i])
	{
		if (s1[i] == c)
			sav = i;
		i++;
	}
	if (s1[i] == c)
		sav = i;
	if (sav > -1)
		return (s1 + sav);
	return (NULL);
}
