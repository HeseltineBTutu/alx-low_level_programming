#include "lists.h"

/**
 * free_listint - a function that remove space allocated to each node.
 * @head: a pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
