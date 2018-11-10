/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:36:19 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/10 13:04:28 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab(char **tab)
{
	int i;
	int ii;

	i = 0;
	while (tab[i])
	{
		ii = 0;
		while (tab[i][ii])
		{
			write(1, &tab[i][ii], 1);
			ii++;
		}
		write(1, "\n", 1);
		i++;
	}
}
