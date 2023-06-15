#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns th nth node
 * @head: head of the linked list
 * @index: index of the node
 *
 * Return: pointer to nth noth of linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count;

	for (count = 0; head != NULL; count++)
	{
		if (count == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
