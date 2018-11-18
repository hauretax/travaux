/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:51:06 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/14 13:46:07 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sr;
	int		i;

	if (s == 0 || f == 0)
		return (0);
	i = 0;
	if ((sr = malloc((ft_strlen((char *)s) + 1) * sizeof(char))) == 0)
		return (0);
	while (s[i])
	{
		sr[i] = f(i, s[i]);
		i++;
	}
	sr[i] = '\0';
	return (sr);
}
