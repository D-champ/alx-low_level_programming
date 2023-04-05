#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at,
 * at a certain index.
 * @head: pointer  to the first element in the list.
 * @index: index of the node to delete.
 * Return: 1 if success, -1 if function fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
		return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
