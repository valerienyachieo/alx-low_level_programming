#include "lists.h"
/**
 * print_listint - function that prints elements of a list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

