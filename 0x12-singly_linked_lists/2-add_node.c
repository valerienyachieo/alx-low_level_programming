#include "lists.h"
/**
 * _strlen - function that determines the lengt of a string
 * @str: string whose length is to be determined
 * Return: string length
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}
/**
 * add_node - function that adds a new node at the begining of the linked list
 * @head: pointer to pointer to list
 * @str: input string parameter
 *
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head == NULL)
		return (0);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

