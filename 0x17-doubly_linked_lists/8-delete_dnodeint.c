#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list
 * @head: pointer to a pointer to the head node of the list.
 * @index: index of the node to be deleted (starting from 0)
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	if (current->next != NULL)
		current->next->prev = previous;
	free(current);
	return (1);
}
