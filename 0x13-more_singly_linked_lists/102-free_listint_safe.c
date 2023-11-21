#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: A double pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	/* Check if the pointer is NULL or if the list is empty */
	if (!h || !*h)
		return (0);

	/* Traverse the linked list and free nodes safely */
	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

