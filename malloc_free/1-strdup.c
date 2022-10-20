#include "main.h"
/**
 * *_strdup - task1
 * @str: char
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int a;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= strlen(str) + 1; a++)
	{
		s[a] = str[a];
	}
	return (s);
}
