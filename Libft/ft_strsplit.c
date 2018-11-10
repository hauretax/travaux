/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 11:52:10 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/10 13:44:40 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		start;
	int		end;
	char	**tr;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	if ((tr = (char **)malloc((ft_cmpw(s, c) + 1) * sizeof(char *))) == 0)
		return (NULL);
	while (s[start] && s[end])
	{
		while (s[start] == c && s[start])
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		tr[i] = ft_strsub(s, start, end - start + 1);
		start = end;
		while (s[start] == c && s[start])
			start++;
		i++;
	}
	return (tr);
}
