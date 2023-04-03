#include "lists.h"
/**
 * free_listint - function that frees listint_t
 * @head: pointer to list
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

