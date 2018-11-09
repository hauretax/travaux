#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	while(s1[i] == s2[i] && s1[i] && i < n)
		i++;
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}