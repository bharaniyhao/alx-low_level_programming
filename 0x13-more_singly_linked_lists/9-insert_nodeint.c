#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting from 0).
 * @n: The data value for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
        listint_t *temp *new;
	
	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
	new->next = *headr;
	*head = new;
	return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
