/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:34:05 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/08 10:47:59 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int y;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		y = 0;
		while (str[y] == to_find[y] && str[y])
			++y;
		if (to_find[y] == '\0')
			return (str);
		++str;
	}
	return (0);
}
