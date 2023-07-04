#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list, handling loops
 * @h: Pointer to pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t size = 0;
if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current)
{
size++;
next = current->next;
free(current);
if (next >= current)
break;
current = next;
}
*h = NULL;
return (size);
}
