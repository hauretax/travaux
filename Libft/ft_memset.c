/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:22:41 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/08 15:55:44 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *tab;

	if (n == 0)
		return (s);
	tab = (unsigned char *)s;
	while (n--)
	{
		*tab = (unsigned char)c;
		tab++;
	}
	return (s);
}
