#include <fcntl.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a new file and writes to it.
 * @filename: name of file to create
 * @text_content: null terminated string to write
 * Return: 1 on success -1 if otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);

	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
