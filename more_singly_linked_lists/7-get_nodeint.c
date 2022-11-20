#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node of
 *                        a linked list.
 * @head: listint_t
 * @index: unsigned int
 * Return: the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
