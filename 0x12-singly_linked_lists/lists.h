#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**                                               \
 * struct list_s - singly linked list             \
 * @str: string - (malloc'ed string)              \
 * @len: length of the string                     \
 * @next: points to the next node                 \
 *                                                \
 * Description: singly linked list node structure \
 */                                               \
#include<string.h>
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function to print the linked list */
size_t print_list(const list_t *h);
/* Function to print the linked list length*/
size_t list_len(const list_t *h);
/* Function to add new node the linked list*/
list_t *add_node(list_t **head, const char *str);
/* Function to add new node at the end of the linked list*/
list_t *add_node_end(list_t **head, const char *str);

#endif
