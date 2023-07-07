#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds all numbers supplied in args
 * @argc: number of arguments
 * @argv: array of arguments
 * Retutn: 0 if success 1 if error
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
/*		if (isalpha(atoi(argv[i])) == 0)
*		{
*			printf("Error\n");
*			return (1);
*		}
*/
		}

		sum += atoi(argv[i]);
			
	}

	printf("%d\n", sum);

	return (0);


}
