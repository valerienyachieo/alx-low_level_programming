#include "lists.h"
/**
 * list_len - fuction that returns number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}

