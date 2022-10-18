#include "main.h"
/**
 * *_strpbrk - task4
 * @s: char
 * @accept: char
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	for (; *s != '\0'; s++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		if (*s == *accept)
		{
			return (s);
		}
	}
	return ('\0');
}
