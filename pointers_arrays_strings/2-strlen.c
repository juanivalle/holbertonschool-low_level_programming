#include "main.h"
/**
 * _strlen - task2
 * @s: char
 * Return: always 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	return (a);
}
