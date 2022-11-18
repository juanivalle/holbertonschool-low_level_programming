#include "lists.h"
/**
 * free_listint - Frees a list.
 * @head: A pointer to the list.
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}
