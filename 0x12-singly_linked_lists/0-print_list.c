# include "lists.h"
/**
 * print_list - function that prints elements of a list
 * @h: pointer to list_t;
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}

