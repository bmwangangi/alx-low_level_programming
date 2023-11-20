#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @head: A pointer to the first node in the listint_t list.
 *
 * Return: The resulting sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	/* Traverse the linked list and accumulate the sum of data */
	while (temporary != NULL)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}

	return (sum);
}

