#include "lists.h"
/**
 * add_dnodeint_end- function that adds newnode at the end of a linked list
 * @head: head of the node
 * @n: value of new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *prev;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	for (prev = NULL; *head != NULL; head = &(*head)->next)
		prev = *head;

	new->prev = prev;
	new->next = NULL;
	new->n = n;
	*head = new;

	return (new);
}


