#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer to a function that prints name
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
