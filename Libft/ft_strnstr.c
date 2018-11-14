/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:53:50 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/14 13:20:50 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t y;
	size_t i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str + n != '\0' && (n - 1) > 0)
	{
		y = 0;
		while (str[y + i] == to_find[y] && str[y + i] && n > i)
			++y;
		if (to_find[y] == '\0')
			return (str + i);
		++i;
		n--;
	}
	return (0);
}
