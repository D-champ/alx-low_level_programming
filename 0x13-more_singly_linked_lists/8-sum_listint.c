#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list.
 * @head: first node in the linked list
 * Return: sum of all the data otherwise 0, if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
