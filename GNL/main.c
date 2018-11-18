#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
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
	get_next_line(fd, &str);
	close(fd);
	printf ("%s\n",str);
	return (0);
}
