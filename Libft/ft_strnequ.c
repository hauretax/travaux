/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 11:43:24 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/15 16:48:51 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s2 == 0 || s1 == 0)
		return (0);
	if (!n)
		return (1);
	while (n > 0)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
		n--;
	}
	return (1);
}
