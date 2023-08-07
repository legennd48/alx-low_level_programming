#include "main.h"

/**
 * main - copies content from one file to another
 * @ac: number of arguments
 * @as: arguments strings. (argument vector)
 */

int main(int ac, char **as)
{
	int fd, rd, wr, cl;
	char *buff = malloc(sizeof(char) * 1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(as[1], O_RDONLY);
	rd = read(fd, buff, 1024);
	if (buff == NULL || fd < 0 || rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", as[1]);
		exit(98);
	}

	cl = close(fd);
	if (cl < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	fd = open(as[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	wr = write(fd, buff, strlen(buff));
	if (fd < 0 || wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", as[2]);
		exit(99);
	}
	cl = close(fd);
	if (cl < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	free(buff);
	return (0);
}
