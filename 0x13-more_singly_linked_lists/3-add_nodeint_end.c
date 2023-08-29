#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));;
	listint_t *tempNode = *head;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tempNode->next)
		tempNode = tempNode->next;

	tempNode->next = newNode;

	return (newNode);
}
