/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:53:50 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/17 13:09:24 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, char const *to_find, size_t n)
{
	size_t i;
	size_t y;

	i = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		y = 0;
		while (str[i + y] == to_find[y] && to_find[y] && (i + y) < n)
			y++;
		if (to_find[y] == '\0')
			return (((char *)str) + i);
		i++;
	}
	return (0);
}
