/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:29:16 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/11 14:51:55 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tmp;

	tmp = lst;
	if (tmp == NULL)
		return ;
	while (tmp->next != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
	f(tmp->content);
}
