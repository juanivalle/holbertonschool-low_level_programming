#include "main.h"
/**
 * *cap_string - task6
 * @c: char
 * Return: always 0
 */
char *cap_string(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] == ' ' || c[a] == ',' || c[a] == ';' || c[a] == '.' ||
				c[a] == '!' || c[a] == '?' || c[a] == '"' ||
				c[a] == '(' || c[a] == ')' || c[a] == '{' ||
				c[a] == '}' || c[a] == '	' ||
				c[a] == '\n')
		{
			a++;
			if ('a' <= c[a] && c[a] >= 'z')
				c[a] = c[a] - 32;
		}
	}
	return (c);
}
