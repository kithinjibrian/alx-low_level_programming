#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to a pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, size_t index)
{
	listint_t *prev = *head;
	listint_t *next = NULL;
	size_t i = 0;

	if ( *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while ( i < index - 1)
	{
		if (!prev || !(prev->next))
		{
			return (-1);
		}
		prev = prev->next;
		i++;
	}

	next = prev->next;
	prev->next = next->next;
	free(next);

	return (1);
}
