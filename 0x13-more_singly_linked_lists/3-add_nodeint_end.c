#include "lists.h"

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
