#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"

int		get_next_line(const int fd, char **line);

int		main(int argc, char **argv)
{
	int		fd;
	char	*str;
	int		i;
	int		j;
	int x;
	int h;

	i = 0;
	x = 0;
	j = 1;
	h = 0;
	if (argc != 2)
	{
		write(2, "bad number arg\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while (x != 2 && h < 50)
	{
		if (j != 1 )
			x = 2;
		h++;
	j = get_next_line(fd, &str);
		printf("%d:", j);
		printf ("%s\n",str);
		ft_free(str, NULL);
	}
	close(fd);
	while(1);	
	return (0);
}
