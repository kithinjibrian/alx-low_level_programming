#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given index in a list
 * @head: first element in the linked list
 * @index: index of the element to return
 *
 * Return: pointer to the element, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t y = 0;
	listint_t *tempNode = head;

	while (tempNode && y < index)
	{
		tempNode = tempNode->next;
		y++;
	}

    if (tempNode)
    {
        return (tempNode);
    }
    else
    {
        return (NULL);
    }
}
