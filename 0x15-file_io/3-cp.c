#include "main.h"

/**
 * prnt_error - prints and exits specified error value
 * @val: num is either exit value
 * @s: name of file causing the error
 * @fd: file descriptor
 * Return: 0 Success
 **/
int prnt_error(int val, char *s, int fd)
{
	switch (val)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(val);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(val);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(val);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(val);
	default:
		return (0);
	}
}

/**
 * main - copies content from one file to another
 * @ac: number of arguments
 * @as: arguments strings. (argument vector)
 * Return: 0
 */

int main(int ac, char **as)
{
	int fd, rd, wr, cl, fd2;
	char buff[1024];

	if (ac != 3)
		prnt_error(97, NULL, 0);

	fd = open(as[1], O_RDONLY);
	if (fd < 0)
		prnt_error(98, as[1], 0);
	rd = read(fd, buff, 1024);
	if (rd < 0)
		prnt_error(98, as[1], 0);
	fd2 = open(as[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 < 0)
		prnt_error(99, as[2], 0);
	while (rd != 0)
	{
		if (rd < 0)
			prnt_error(98, as[1], 0);
		wr = write(fd2, buff, rd);
		if (wr < 0)
			prnt_error(99, as[2], 0);
		rd = read(fd, buff, 1024);
		fd2 = open(as[2], O_WRONLY | O_APPEND);
	}
	cl = close(fd);
	if (cl < 0)
		prnt_error(100, NULL, fd);
	cl = close(fd2);
	if (cl < 0)
		prnt_error(100, NULL, fd2);
	return (0);
}
