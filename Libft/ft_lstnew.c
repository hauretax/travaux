/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:09:22 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/11 13:56:39 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *n_e;

	if (content_size == 0 || content == NULL)
	{
		n_e->next = NULL;
		n_e->content = NULL;
		n_e->content_size = 0;
		return (n_e);
	}
	if ((n_e = (t_list *)malloc(sizeof(t_list))) == 0)
		return (NULL);
	if ((n_e->content = (char *)malloc(sizeof(content_size))) == 0)
	{
		free(n_e);
		return (NULL);
	}
	n_e->next = NULL;
	ft_memcpy(n_e->content, content, content_size);
	n_e->content_size = content_size;
	return (n_e);
}
