#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t list.
 * @head: A double pointer to the head of the listint_t list.
 *
 * Return: The value stored in the head node.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);
}
