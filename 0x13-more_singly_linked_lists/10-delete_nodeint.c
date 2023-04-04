#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes nodes at a given index
 * @head: pointer to pointer
 * @index: index or position of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	for (i = -1; *head != NULL; i++)
	{
		if ((i + 1) == index)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}
		head = &(*head)->next;
	}
	return (-1);
}


