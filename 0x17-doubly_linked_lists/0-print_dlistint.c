#include "lists.h"
/**
 * print_dlistint - function prints all elements of the list
 * @h: pointer to list_t;
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);
	return (count);
}
