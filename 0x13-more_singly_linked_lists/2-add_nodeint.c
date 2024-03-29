#include "lists.h"

/**
 * add_nodeint - a function that add a new node at the beginning of a
 *		linked list.
 * head: a pointer to the head of a linked list.
 *
 * @n: The integer for the new node to contain.
 *
 * Return: the address of the new element,
 *	Otherwise return NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
