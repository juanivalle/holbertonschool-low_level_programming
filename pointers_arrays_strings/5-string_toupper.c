#include "main.h"
/**
 * *string_toupper - task5
 * @c: char
 * Return: always 0
 */
char *string_toupper(char *c)
{
	int b;

	for (b = 0; c[b] != '\0'; b++)
	{
		if ('a' <= c[b] && c[b] <= 'z')
		{
			c[b] = c[b] - 32;
		}
	}
	return (0);
}
