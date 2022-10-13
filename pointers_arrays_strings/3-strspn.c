#include "main.h"
/**
 * _strspn - task3
 * @s: char
 * @accept: char
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; s[a] != ' '; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
	}
	return (c);
}
