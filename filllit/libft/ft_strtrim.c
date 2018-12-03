/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:53:14 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/14 14:58:23 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i1;
	int		i2;
	char	*sr;

	i1 = 0;
	i2 = 0;
	if (s == 0)
		return (0);
	if (ft_strtrim_len(s, &i1, &i2))
		return (NULL);
	sr = ft_strsub(s, i1, i2 - i1);
	return (sr);
}
