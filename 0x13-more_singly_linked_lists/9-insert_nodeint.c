#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts new node at a given position
 * @head: pointer to pointer to the list
 * @idx: index or position where new node should be added
 * @n: value of new element
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	for (i = 0; *head != NULL; i++)
	{
		if ((i + 1) == idx)
		{
			newnode->next = (*head)->next;
			(*head)->next = newnode;
			return (newnode);
		}
		head = &(*head)->next;
	}
	return (NULL);
}

