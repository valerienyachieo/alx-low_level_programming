#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the start of the linked list
 * @head: pointer to the listint_t
 * @n: input integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (0);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
