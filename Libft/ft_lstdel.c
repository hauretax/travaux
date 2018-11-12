/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:23:48 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/12 14:59:26 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*ntmp;

	tmp = *alst;
	while (tmp->next != NULL)
	{
		ntmp = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = ntmp;
	}
	*alst = (NULL);
}
