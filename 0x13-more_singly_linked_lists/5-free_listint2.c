#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: pointer to list
 */

void free_listint2(list_t **head)
{
list_t *tmp;

if (head == NULL)
{
return (NULL);
}

while (head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}  

*head = NULL;
}
