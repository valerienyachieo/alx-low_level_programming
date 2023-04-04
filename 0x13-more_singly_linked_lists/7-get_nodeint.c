#include "lists.h"
/**
 * get_nodeint_at_index - function that gets the nth node of a linked list
 * @head: pointer to the list
 * @index: position of the nth node to get
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head != NULL; count++)
	{
		if (count == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}


