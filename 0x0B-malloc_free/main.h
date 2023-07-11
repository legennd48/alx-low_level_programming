#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of array
 * @c: char used for initialization
 * Return: NULL or char array
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - eturns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.eturns a pointer to
 * a newly allocated space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: string to be copied
 * Return: NULL is str is null or mem allocation fails or pointer to new string
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings.
 * @s1: first and destination string
 * @s2: second string
 * Return: NULL or new string pointer
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns pointer to initialized 2d array of ints.
 * @width: number of cols
 * @height: number of rows.
 * Return: NULL or pointer to array.
 */

int **alloc_grid(int width, int height);

/**
 * free-grid - frees the memory of a 2d array
 * @grid: pointer to 2d array
 * @height: number of rows in array.
 */

void free_grid(int **grid, int height);

/**
 * argstostr - concatenates all arguments to the program to a string with
 * each argument seperated by a new line
 * @ac: number of arguments.
 * @av: arguments recieved.
 * Return: Null or pointer to new string
 */

char *argstostr(int ac, char **av);

char **strtow(char *str);

#endif
