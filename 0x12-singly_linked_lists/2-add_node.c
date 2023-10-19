#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *dup_str = strdup(str);

    if (!str)
        return (NULL);

    new_node = malloc(sizeof(list_t));

    if (!new_node)
    {
        free(dup_str);
        return (NULL);
    }

    new_node->str = dup_str;
    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

