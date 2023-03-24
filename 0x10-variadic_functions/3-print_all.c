#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_char - function that prints a character
 * @arg: list of arguments passed to the function
 *
 * Return: no return
 */
void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}
/**
 * print_int - function that prints integers
 * @arg: list of srguments passed to the function
 *
 * Return: no return
 */
void print_int(va_list arg)
{
	int x;

	x = va_arg(arg, int);
	printf("%d", x);
}
/**
 * print_float- function that prints a float
 * @arg:list of arguments passed to the function
 *
 * Return: no return
 */
void print_float(va_list arg)
{
	float y;

	y =  va_arg(arg, double);
	printf("%f", y);
}
/**
 * print_string - function that prints  string
 * @arg: list of arguments to be passed to the function
 *
 * Return: no return
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printal_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].tp)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].f(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

