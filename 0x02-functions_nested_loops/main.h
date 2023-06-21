#ifndef MAIN_H
#define MAIN_H

/**
 *_putchar - Writes the character a to standard output
 *@a: the character to be printed
 *
 *Return: Always 0 (Success)
 */
int _putchar(char a);

/**
 * print_alphabet - prints the english alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet in lovercase 10x
 * Return: 0
 */
void print_alphabet_x10(void);

/**
 *_islower - checks for lowercase character
 *@c: character to check
 *Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int c);

/**
 *_isalpha - checks for alpha charracter
 *@c: charactet to be inspected
 *Return: 1 if alpha, 0 if not.
 */

int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);




#endif
