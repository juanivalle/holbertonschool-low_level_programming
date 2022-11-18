#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: listint_t
 * @n: const int
 * Return: the addres of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
