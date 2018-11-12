/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:03:04 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/12 14:57:07 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char 	*ddest;
	unsigned char 	*ssrc;
	size_t				i;

	i = -1;
	if (n == 0)
		return (dest);
	ddest = (unsigned char*)dest;
	ssrc = (unsigned char*)src;
	if (ssrc < ddest)
		while (n--)
			ddest[n] = ssrc[n];
	else
		while (++i < n)
			ddest[i] = ssrc[i];
	return (dest);
}
