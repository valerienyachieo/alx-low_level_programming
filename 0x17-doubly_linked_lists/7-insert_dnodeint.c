#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts new node at given position
 * @h: pointer to header to the list
 * @idx: index or position where new node should be added
 * @n: value of new element
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	for (i = 0; *h != NULL; i++)
	{
		if ((i + 1) == idx)
		{
			newnode->next = (*h)->next;
			(*h)->next = newnode;
			return (newnode);
		}
		h = &(*h)->next;
	}
	return (NULL);
}

