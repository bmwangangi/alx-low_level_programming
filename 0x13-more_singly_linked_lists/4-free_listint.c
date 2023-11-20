#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: A pointer to the beginning of the listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	/* Traverse the linked list and free nodes */
	while (head != NULL)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}

