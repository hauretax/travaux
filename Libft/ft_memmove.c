/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:03:04 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/08 15:57:18 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ddest;
	unsigned char *ssrc;

	if (n == 0)
		return (dest);
	ddest = (unsigned char*)dest;
	ssrc = (unsigned char*)src;
	while (n--)
		ddest[n] = ssrc[n];
	return (dest);
}
