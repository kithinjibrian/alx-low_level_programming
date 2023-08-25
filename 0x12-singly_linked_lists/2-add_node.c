#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be added to the new node.
 *
 * Return: Pointer to the newly added node (head of the list).
 *         On failure, NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t len = 0;

	while (str[len])
	{
		len++;
	}

	newNode = malloc(sizeof(list_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
