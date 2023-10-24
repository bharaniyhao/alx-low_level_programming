#include "lists.h"

/**
 * free_listd - Frees a linked list.
 * @head: Pointer to the head of a list.
 * Return: No return value.
 */
void free_listd(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Prints a listint_t list and checks for infinite loops.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *slow = head, *fast = head;

	while (fast && fast->next)
	{
		num_nodes++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("Infinite loop detected\n");
			return (num_nodes);
		}
	}

	return (num_nodes);
}

