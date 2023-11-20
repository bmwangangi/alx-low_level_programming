#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: A double pointer to the first node in the listint_t list.
 * @idx: The index where the new node is added.
 * @n: The data to insert in the new node.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temporary = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temporary && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temporary->next;
			temporary->next = new_node;
			return (new_node);
		}
		else
			temporary = temporary->next;
	}
	return (NULL);
}

