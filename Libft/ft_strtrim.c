#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i1;
	int		i2;
	char	*sr;

	i1 = 0;
	i2 = 0;
	if (ft_strtrim_len(s, &i1, &i2))
		return (NULL);
	sr = ft_strsub(s, i1, i2);
	return (sr);
}