/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:12:00 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/15 13:59:26 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cmpw(char const *s, char c)
{
	int w;
	int i;

	w = 0;
	i = 0;
	if (s == 0)
		return (0);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		w++;
	}
	return (w);
}
