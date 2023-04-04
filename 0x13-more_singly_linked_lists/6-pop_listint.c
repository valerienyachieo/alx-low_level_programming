#include "lists.h"
/**
 * pop_listint - function that deletes head node of a list
 * @head: pointer to pointer to the list
 *
 * Return: heads node data n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}

