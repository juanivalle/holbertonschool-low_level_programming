#include "lists.h"
/**
 * *add_node -function that adds a new node at the beginning
 * @head: list_t
 * @str: const char
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicado;
	int i;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	duplicado = strdup(str);
	if (duplicado == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; str[i] != '\0';)
		i++;
	new_node->str = duplicado;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
