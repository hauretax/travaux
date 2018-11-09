#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*sr;
	int		i;

	i = 0;
	if((sr = malloc(len *sizeof(char))) == 0)
		return (0);
	while (len > 0 && s[start])
	{
		sr[i] = s[start];
		len--;
		i++;
		start++;
	}
	sr[i] = '\0';
	return (sr);
}