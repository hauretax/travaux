/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:32:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/17 12:55:54 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t i2;
	size_t t;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2])
		i2++;
	if (size < i + 1)
		return (i2 + size);
	t = i + i2;
	i2 = 0;
	while (src[i2] && (i2 + i + 1) < size)
	{
		dest[i + i2] = src[i2];
		i2++;
	}
	dest[i + i2] = '\0';
	if (size < i)
		return (i + size + 1);
	return (t);
}
