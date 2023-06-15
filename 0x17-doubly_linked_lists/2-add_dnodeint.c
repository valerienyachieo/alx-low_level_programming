#include "lists.h"
/**
 * add_dnodeint - function that adds new node atthe begining of a linked list
 * @head: pointer to head node
 * @n: element to add to newnode
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
