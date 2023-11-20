#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: A pointer to the beginning of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	/* Traverse the linked list and count nodes */
	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}

