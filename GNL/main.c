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

	if (argc != 2)
	{
		write(2, "bad number arg\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	printf("%d:",get_next_line(fd, &str));
	printf ("%s\n",str);
	ft_free(str, NULL);
	printf("%d:",get_next_line(fd, &str));
	printf ("%s\n",str);
	ft_free(str, NULL);
	printf("%d:",get_next_line(fd, &str));
	close(fd);
	printf ("%s\n",str);
	free (str);
	str = NULL;
	while (1);
	return (0);
}
