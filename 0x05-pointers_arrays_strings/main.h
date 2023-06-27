#ifndef MAIN_H
#define MAIN_H

/**
 *reset_to_98 - takes a pointer to an int as parameter and updates the value it
 *points to to 98
 *@n: the pointer being taken
 */
void reset_to_98(int *n);

/**
 *swap_int - swaps the value of 2 integers
 *@a: first integer to be swapped
 *@b: second integer to be swapped
 */

void swap_int(int *a, int *b);

/**
 *_strlen - reads the lenght of a string
 *@s: string whose lenght is to be read
 *
 *Return: lenght of string
 */
int _strlen(char *s);


void _puts(char *str);

int _putchar(char a);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);
#endif
