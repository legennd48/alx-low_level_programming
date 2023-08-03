#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 in little endian - 0 in big endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (*ptr == 1);
}
