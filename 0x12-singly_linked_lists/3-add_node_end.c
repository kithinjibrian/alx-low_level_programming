#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the newly added node (end of the list).
 *         On failure, returns NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tempNode;
	size_t len = 0;

	while (str[len])
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tempNode->next)
	{
		tempNode = tempNode->next;
	}

	tempNode->next = newNode;

	return (newNode);
}
