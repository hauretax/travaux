/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:42:51 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/12 11:21:11 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*sr;
	int		i;

	i = 0;
	if ((sr = malloc((ft_strlen((char *)s) + 1) * sizeof(char))) == 0)
		return (0);
	while (s[i])
	{
		sr[i] = f(s[i]);
		i++;
	}
	return (sr);
}
