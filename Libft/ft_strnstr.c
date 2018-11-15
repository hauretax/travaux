/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:53:50 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/15 14:46:00 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *to_find, size_t n)
{
	size_t y;

	if (*to_find == '\0')
		return ((char *)str);
	y = ft_strlen((char *)to_find);
	while (*str && n >= y)
	{
		if (*str == *to_find && (ft_memcmp(str, to_find, y)) == 0)
			return ((char *)str);
		str++;
		n--;
	}
	return (0);
}
