#include "lists.h"

/**
 * free_list - a function that remove space allocated to each node.
 * @head: pointer to a pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
