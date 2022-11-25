#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function that returns the nth node
 * @head: dlistint_t
 * @index: unsigned int
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
	if (head == NULL)
		return (NULL);
	head = head->next;
	}
	return (head);
}
