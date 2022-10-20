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
        size_t node = 0;


        while (h)
        {
        if (h->str == NULL)
        {
                printf("[0] (nil)\n");
        }

        else
        {
                printf("[%d] %s", h->len, h->str);
        }
        nodes++;
        h = h->next;
    }
    return (node);
}
