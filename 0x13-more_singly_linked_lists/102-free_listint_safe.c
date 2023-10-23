#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list and sets head to NULL.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current, *next;
    current = *h;

    while (current)
    {
        size++;
        next = current->next;
        free(current);
        current = next;

        /* Check for an infinite loop */
        if (current <= next)
        {
            *h = NULL; /* Set the head to NULL */
            return (size);
        }
    }

    *h = NULL; /* Set the head to NULL */
    return (size);
}
