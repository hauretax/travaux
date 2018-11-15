/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 11:52:10 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/15 17:23:03 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		t[3];
	char	**tr;

	t[1] = 0;
	t[2] = 0;
	t[0] = 0;
	if (s == 0)
		return (0);
	if ((tr = (char **)malloc((ft_cmpw(s, c) + 1) * sizeof(char *))) == 0)
		return (NULL);
	while (s[t[1]] && s[t[2]])
	{
		while (s[t[1]] == c)
			t[1]++;
		t[2] = t[1];
		while (s[t[2]] != c && s[t[2]])
			t[2]++;
		tr[t[0]] = ft_strsub(s, t[1], t[2] - t[1]);
		t[1] = t[2];
		while (s[t[1]] == c)
			t[1]++;
		t[0]++;
	}
	tr[t[0]] = NULL;
	return (tr);
}
