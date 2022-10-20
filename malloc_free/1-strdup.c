#include "main.h"
/**
 * *_strdup - task1
 * @str: char
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *s;
	int a;

	for (a = 0; str[a] != '\0'; a++)
	s = malloc(sizeof(char) * a);
	s = str;
	if (str == NULL)
	{
		return (NULL);
	}
	else if (s > str)
	{
		return (NULL);
	}
	else if (s)
	{
		return (s);
	}
	free(s);
	return (0);
}
