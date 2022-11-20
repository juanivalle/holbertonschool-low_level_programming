#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node in a given position.
 * @head: listint_t
 * @idx: unsigned int
 * @n: int
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cop = *head, *new;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cop;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (cop == NULL || cop->next == NULL)
			return (NULL);

		cop = cop->next;
	}
	new->next = cop->next;
	cop->next = new;
	return (new);
}
