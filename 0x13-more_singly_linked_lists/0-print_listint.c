#include "lists.h"

/**
 * print_listint - prints and returns the number of element
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of elements in the listint_t list.
 */


size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}

return (nodes);
}
