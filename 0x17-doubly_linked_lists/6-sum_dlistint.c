#include "lists.h"
/**
 * sum_dlistint - function that sums all the data (n) of a linked list
 * @head: pointer to head of the linked list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
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
