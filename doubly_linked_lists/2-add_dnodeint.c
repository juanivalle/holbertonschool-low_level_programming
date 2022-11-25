#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: dlistint_t
 * @n: const int
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	if (h == NULL)
		return (new_node);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
		h = h->next;
	return (new_node);
}
