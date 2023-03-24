#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct printal - structure defining parameter type to be printed
 * @tp: the type
 * @f: function pointer to a function that prints data type corresonding to tp
 */
typedef struct printal
{
	char *tp;
	void (*f)(va_list arg);
}printal_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
