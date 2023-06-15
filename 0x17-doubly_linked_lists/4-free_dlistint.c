#include "lists.h"
/**
 * free_dlistint- function that frees linked list
 * @head: head of the list
 *
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
