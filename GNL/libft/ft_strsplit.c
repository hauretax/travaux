/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 11:52:10 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/17 11:22:11 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**idea_split(char **tr, char const *s, char c, int t[3])
{
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

char			**ft_strsplit(char const *s, char c)
{
	int		t[3];
	char	**tr;

	t[1] = 0;
	t[2] = 0;
	t[0] = 0;
	if (s == 0)
		return (0);
	if (ft_cmpw(s, c) == 0)
	{
		if ((tr = malloc(1)) == 0)
			return (NULL);
		if ((tr[0] = malloc(1)) == 0)
			return (NULL);
		tr[0] = NULL;
		return (tr);
	}
	if ((tr = (char **)malloc((ft_cmpw(s, c) + 1) * sizeof(char *))) == 0)
		return (NULL);
	return (idea_split(tr, s, c, t));
}
