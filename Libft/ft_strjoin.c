#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		y;
	char	*sr;

	if((sr = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) 
		+ 1 *sizeof(char))) == 0)
		return (0);
	i = 0;
	y = 0;
	while (s1[i])
		sr[y++] = *s1++;
	i = 0;
	while (s2[i])
		sr[y++] = *s2++;
	sr[y] = '\0';
	return (sr);
}