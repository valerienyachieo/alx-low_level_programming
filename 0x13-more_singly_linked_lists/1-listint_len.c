#include "lists.h"
/**
 * listint_len - function that returns number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
