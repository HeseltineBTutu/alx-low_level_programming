#include "lists.h"
/**
 * print_dlistint - print all the elememnts of a dlistint_t list.
 *
 * @h : The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
