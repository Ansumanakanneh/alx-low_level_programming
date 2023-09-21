#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head; head of the node
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *oldnode, *cap;
	unsigned int a, count = 0;

	oldnode = malloc(sizeof(list_t));
	if (oldnode == NULL)
		return (NULL);
	oldnode->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	oldnode->len = count;
	oldnode->next = NULL;
	cap = *head;

	if (cap == NULL)
		*head = oldnode;
	else
	{
		while (cap->next != NULL)
			cap = cap->next;
		cap->next = oldnode;
	}
	return (*head);
}
