#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: pointer to list
 */

void free_listint(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
