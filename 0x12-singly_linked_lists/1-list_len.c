#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t element = 0;

while (h)
{
element++;
h = h->next;
}

return (element);
}
