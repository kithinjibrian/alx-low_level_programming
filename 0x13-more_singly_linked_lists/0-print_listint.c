#include "lists.h"


size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->next);
		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}