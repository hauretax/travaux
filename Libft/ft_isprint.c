/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:18:29 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/08 12:20:12 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(char *str)
{
	int i;

	i = 0;
	while (str[i] <= '~' && str[i] >= '!' && str[i] && str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
