#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t list and checks for infinite loops.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num_nodes = 0;

    while (head)
    {
        num_nodes++;
        printf("[%p] %d\n", (void *)head, head->n);

        if (head <= head->next)
        {
            printf("Infinite loop detected\n");
            break;
        }

        head = head->next;
    }

    return (num_nodes);
}
