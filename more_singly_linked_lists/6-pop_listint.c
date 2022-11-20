#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list.
 * @head: listint_t
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (*head == NULL)
		return (0);

	node = *head;
	a = (*head)->n;
	*head = (*head)->next;
	free(node);
	return (a);
}
