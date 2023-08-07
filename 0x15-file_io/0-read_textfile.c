#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a specifird lenght of characters from file
 * and prints it to stdout.
 * @filename: name of file to be opened and read
 * @letters: number of bytes to be read.
 * Return: number of bytes written or 0 on falure.
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytesRead, bytesWritten;
	char *s;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);

	bytesRead = read(fd, s, letters);
	if (bytesRead == 0)
	{
		close(fd);
		free(s);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, s, bytesRead);
	if (bytesWritten < 0)
	{
		close(fd);
		free(s);
		return (0);
	}
	close(fd);
	free(s);
	return (bytesWritten);

}
