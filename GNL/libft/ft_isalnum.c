/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:08:17 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/14 13:18:30 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' &&
				c >= 'A') || (c <= '9' && c >= '0'))
		return (1);
	return (0);
}