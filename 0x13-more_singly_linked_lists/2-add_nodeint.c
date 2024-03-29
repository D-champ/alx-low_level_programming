#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list.
 * @head: pointer to the head of the listint_t list.
 * @n: integer to be contained in the new node
 * Return: pointer to the new node , else NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
