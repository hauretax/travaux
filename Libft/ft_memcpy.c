/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:34:19 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/11 13:30:16 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ssrc;
	unsigned char *ddest;

	ssrc = (unsigned char *)src;
	ddest = (unsigned char *)dest;
	if (n == 0 || dest == src)
		return (dest);
	while (--n)
		*ddest++ = *ssrc++;
	*ddest = *ssrc;
	return (ddest);
}
