/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:45:01 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/11 16:12:15 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*stmp;

	if (*alst == NULL)
		return ;
	while (1)
	{
		tmp = *alst;
		if (tmp->next == NULL)
		{
			free (tmp);
			break ;
		}
		stmp = *alst;
		while (tmp->next != NULL)
		{
			stmp = tmp;
			tmp = tmp->next;
		}
		stmp->next = NULL;
		free (tmp);
	}
	alst = (NULL);
}
