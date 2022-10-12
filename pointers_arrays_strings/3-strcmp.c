#include "main.h"
/**
 * _strcmp - task3
 * @s1: char
 * @s2: char
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] == s2[a]; a++)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			break;
		a++;
	}
	return (s1 - s2);
}
