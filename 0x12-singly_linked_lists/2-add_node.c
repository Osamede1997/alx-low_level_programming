#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: string to be added
 * Return: list of type list_t
 */

list_t *add_node(list_t **head, const char *str)
{
        char *duplicate;
        size_t len;
        list_t *new;

        new = malloc(sizeof(list_t));

        if (new == NULL)
        {
                return (NULL);
        }

        duplicate = strdup(str);
        if (duplicate == NULL)
        {
                free(new);
                return (NULL);
        }

        for (len = 0; str[len]; len++)
        {
                ;
        }

        new->str = duplicate;
        new->len = len;
        new->next = *head;

        *head = new;

        return (new);
}
