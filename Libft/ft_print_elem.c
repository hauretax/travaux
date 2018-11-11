/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:47:28 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/11 15:14:56 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_elem(t_list *begin_list)
{
	t_list *tmp;

	tmp = begin_list;
	if (tmp == NULL)
		return ;
	while (tmp->next != NULL)
	{
		ft_putstr((char *)tmp->content);
		tmp = tmp->next;
	}
	ft_putstr((char *)tmp->content);
}
