#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *previous;
if (*head == NULL) /* If the list is empty */
return (NULL);
previous = NULL;
current = *head;
while (current != NULL)
{
*head = current->next; /* Update the head */
current->next = previous; /* Reverse the link */
previous = current; /* Move the previous node */
current = *head; /* Move the current node */
}
*head = previous; /* Update the head to the last node */
return (*head);
}
