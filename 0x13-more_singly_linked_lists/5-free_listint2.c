#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: A pointer to the address of the
 * 	head of the listint_t list.
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	while(current !=NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
