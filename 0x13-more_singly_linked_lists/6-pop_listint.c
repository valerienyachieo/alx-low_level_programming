#include "lists.h"
/**
 * pop_listint - function that deletes head node of a list
 * @head: pointer to pointer to the list
 *
 * Return: heads node data n
 */
int pop_listint(listint_t **head)
{
	int n_head;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = (*head)->next;
	n_head = (*head)->n;
	free(*head);
	*head = temp;

	return (n_head);
}

