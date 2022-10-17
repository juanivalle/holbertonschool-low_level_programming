#include "main.h"
/**
 * _strlen_recursion - task2
 * @s: char
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
