/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:15:38 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/11 16:06:45 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*nlst;
	int		size;

	tmp = lst;
	if (!(size = ft_lstsize(lst)))
		return (NULL);
	if ((nlst = (t_list *)malloc(sizeof(t_list *) * size)) == 0)
		return (0);
	while (lst->next != NULL)
	{
		nlst = f(lst);
		lst = lst->next;
	}
	nlst = f(lst);
	return (nlst);
}
