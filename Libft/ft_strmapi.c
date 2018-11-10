/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:51:06 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/10 11:42:20 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sr;
	int		i;

	i = 0;
	if ((sr = malloc(ft_strlen((char *)s) * sizeof(char))) == 0)
		return (0);
	while (s[i])
	{
		sr[i] = f(i, s[i]);
		i++;
	}
	return (sr);
}
