/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:25:28 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/26 15:35:29 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_free(char *s1, char *s2)
{
	if (s1 != NULL)
	{
		free(s1);
		s1 = NULL;
	}
	if (s2 != NULL)
	{
		free(s2);
		s2 = NULL;
	}
	return (0);
}
