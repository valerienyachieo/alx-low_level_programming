#include "lists.h"
/**
 * sum_listint - function that sums up data in a linked list
 * @head: pointer to the linked list
 *
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
