#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the linked list to search for.
 *
 * Return: The address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	/* Check if the list is empty */
	if (!head)
		return (NULL);

	/* Use Floyd's Tortoise and Hare algorithm to find the loop */
	while (first != NULL && second != NULL && second->next != NULL)
	{
		second = second->next->next;
		first = first->next;

		/* Loop detected, find the node where the loop starts */
		if (second == first)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}

	/* No loop found */
	return (NULL);
}

