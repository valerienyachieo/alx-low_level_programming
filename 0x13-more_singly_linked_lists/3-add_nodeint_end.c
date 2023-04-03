#include "lists.h"
/**
 * add_nodeint_end - function that adds new node at the end of the linked list
 * @head: pointer to pointer to list
 * @n: input integer
 *
 * Return: the address of the new element, or NULL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;

	if (head == NULL)
		return (0);
	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	while (*head)
		head = &(*head)->next;
	*head = endnode;

	return (endnode);
}
