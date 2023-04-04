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

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(head);
}
