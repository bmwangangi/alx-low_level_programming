#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A double pointer to the first node in the listint_t list.
 *
 * Return: A pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	/* Traverse the linked list and reverse the direction of pointers */
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	/* Update the head to point to the new first node */
	*head = prev;

	return (*head);
}

