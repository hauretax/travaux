#include "libft.h"

int	ft_strtrim_len(char const *s, int *i1, int *i2)
{
	int y1;
	int y2;

	y1 = 0;
	y2 = 0;
	while ((s[y1] == ' ' || s[y1] == '\n' || s[y1] == '\t') && s[y1])
			y1++;
	if (s[y1] == '\0')
		return (1);
	printf("ug\n" );
	y2 = y1;
	while (s[y2])
		y2++;
	y2--;
	while ((s[y2] == ' ' || s[y2] == '\n' || s[y2] == '\t') && s[y2])
		y2--;
	*i1 = y1;
	*i2 = y2 + 1;
	return (0);
}