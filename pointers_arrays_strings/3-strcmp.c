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

	a = 0;
	while (s1[a] == s2[a] && s1[a] == '\0')
		a++;
	return (s1 - s2);
}
