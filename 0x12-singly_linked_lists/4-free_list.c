#include "lists.h"

/**
 * free_list - Frees all the nodes of a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Description: This function releases the memory allocated
 *              for each node and its associated string in
 *              the linked list.
 */
void free_list(list_t *head)
{
	list_t *tempNode;

	while (head)
	{
		tempNode = head->next;
		free(head->str);
		free(head);
		head = tempNode;
	}
}
