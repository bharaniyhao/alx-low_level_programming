#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast, *loop_start;
size_t count = 0;
if (head == NULL)
exit(98);
slow = fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
loop_start = slow;
do
{
count++;
slow = slow->next;
}while (slow != loop_start);
break;
}
}
slow = head;
while (1)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
if (slow == loop_start)
break;
slow = slow->next;
}
return (count);
}
