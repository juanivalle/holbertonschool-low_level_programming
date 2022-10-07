#include "main.h"
#include <string.h>
/**
 * rev_string - task4
 * @s: char
 * Return: always 0
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	a--;
		for (b = 0; b < a; b++)
		{
			c = s[b];
			s[b] = s[a];
			s[a] = c;
			a--;
		}
}
