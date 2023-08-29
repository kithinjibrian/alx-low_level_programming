#include "lists.h"

/**
 * pop_listint - pops the first node of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int count;

	if (!head || !*head)
    {
        return (0);
    }

	count = (*head)->n;
	tempNode = (*head)->next;
	free(*head);
	*head = tempNode;

	return (count);
}
