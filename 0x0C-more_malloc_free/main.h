#ifndef MAIN_H
#define MAIN_H


/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to be alocated
 * Return: pointer to allocated memory ot NULL
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenes all of string and n bytes of second string
 * to a new dynamically allocated pointer
 * @s2: second string
 * @s1: first string
 * @n: number of bytes to be copied from second string
 * Return: Null or pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);


void *_calloc(unsigned int nmemb, unsigned int size);




#endif
