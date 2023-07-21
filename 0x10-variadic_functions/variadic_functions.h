#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct f - structure defining data type of format specifier and
 * tge corresponding function
 * @type: the format character
 * @func: function pointer of thr corresponfing function
 *
 * Description:this helps to select the function
 * that matches the provided specifier
 */

typedef struct f
{
	char type;
	void (*func)(va_list arg);
} form;
void print_all(const char * const format, ...);
#endif
