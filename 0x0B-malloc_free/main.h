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

#endif
