/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:53:50 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/08 11:01:18 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int y;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0' && (n - 1) > 0)
	{
		y = 0;
		while (str[y] == to_find[y] && str[y] && (n - 1) > 0)
			++y;
		if (to_find[y] == '\0')
			return (str);
		++str;
		n--;
	}
	return (0);
}
