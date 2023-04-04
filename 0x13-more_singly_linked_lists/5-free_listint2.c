#include "lists.h"
/**
 * free_listint2 - function that frees listint_t
 * @head: pointer to pointer to list
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp = (*head)->next;
		free(head);
		*head = temp;
	}
	head = NULL;
}

