#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to a pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
        return -1;

    listint_t *temp = *head;
    
    if (index == 0)
    {
        *head = (*head)->next;
        free(temp);
        return 1;
    }

    unsigned int i = 0;
    while (i < index - 1)
    {
        if (temp == NULL || temp->next == NULL)
            return -1;
        temp = temp->next;
        i++;
    }

    listint_t *node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    free(node_to_delete);

    return (1);
}
