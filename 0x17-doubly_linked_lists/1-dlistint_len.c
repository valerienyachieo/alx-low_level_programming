#include "lists.h"
/**
 * dlistint_len - function that counts number of elements in a linked list
 * @h: pointer to head of the linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
		;
	return (count);
}
