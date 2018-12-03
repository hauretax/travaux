/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:09:22 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/29 16:34:05 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tabsize(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

NAME_LIST	*ft_lstnew(char **content, char let)
{
	NAME_LIST *n_e;

	if ((n_e = (NAME_LIST *)malloc(sizeof(NAME_LIST))) == 0)
		return (NULL);
	if (let == 0 || content == NULL)
	{
		n_e->next = NULL;
		n_e->content = NULL;
		n_e->let = 0;
		return (n_e);
	}
	if ((n_e->content = (char *)malloc(tabsize(n-e->content))) == 0)
	{
		free(n_e);
		return (NULL);
	}
	n_e->next = NULL;
	ft_memcpy(n_e->content, content, content_size);
	n_e->content_size = content_size;
	return (n_e);
}
