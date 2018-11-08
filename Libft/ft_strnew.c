/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:34:09 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/08 16:11:37 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	char *s;

	if ((s = malloc(size)) == 0)
		return (0);
	while (size--)
	{
		*s = '\0';
		s++;
	}
	return (s);
}
