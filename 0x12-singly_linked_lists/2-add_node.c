#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of node
 * @str: string to store
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *oldnode;
	unsigned int a, count = 0;

	oldnode = malloc(sizeof(list_t));
	if (oldnode == NULL)
		return (NULL);
	oldnode->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	oldnode->len = count;
	oldnode->next = *head;
	*head = oldnode;

	return (*head);
}
