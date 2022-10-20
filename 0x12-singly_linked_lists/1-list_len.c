#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list
 * Return: node of type size_t
 */

size_t print_list(const list_t *h)
{
        size_t element = 0;

        while (h)
        {
                element++;
                h = h->next;
        }

        return (element);
}
