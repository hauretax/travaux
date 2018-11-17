/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:45:52 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/17 11:56:18 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sizint(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*idea_zero(void)
{
	char	*sr;

	if ((sr = ft_strnew(1)) == 0)
		return (NULL);
	sr[0] = '0';
	sr[1] = '\0';
	return (sr);
}

static int		idea_neg(int n)
{
	if (n < 0)
		return (((n % 10) * -1));
	return (n % 10);
}

char			*ft_itoa(int n)
{
	int		i;
	char	*sr;

	i = ft_sizint(n);
	if (n == 0)
		return (idea_zero());
	if (n < 0)
		i++;
	if ((sr = ft_strnew(i)) == 0)
		return (NULL);
	sr[i] = '\0';
	if (n < 0)
		sr[0] = '-';
	i--;
	while (i > 0)
	{
		sr[i] = (idea_neg(n) + '0');
		i--;
		n = n / 10;
	}
	if (sr[0] == '\0')
		sr[i] = (idea_neg(n) + '0');
	return (sr);
}
