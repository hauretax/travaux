/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:25:07 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/14 17:53:04 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int i;

	if (str == 0)
		return ;
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
