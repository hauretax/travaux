/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:32:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/12 15:15:58 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
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
