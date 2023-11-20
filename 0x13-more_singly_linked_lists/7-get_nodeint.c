#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 * @head: A pointer to the first node in the listint_t list.
 * @index: The index of the node to return.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temporary = head;

	/* Traverse the linked list until the specified index is reached */
	while (temporary != NULL && i < index)
	{
		temporary = temporary->next;
		i++;
	}

	return (temporary ? temporary : NULL);
}

