#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
