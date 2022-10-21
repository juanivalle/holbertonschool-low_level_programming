#include "main.h"
/**
 * *str_concat - task2
 * @s1: char
 * @s2: char
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	char *s4;
	unsigned int a;
	unsigned int b;

	if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	s3 = malloc(sizeof(char) * strlen(s1) + 1);
	s4 = malloc(sizeof(char) * strlen(s2));
	if (s3 == NULL)
	{
		return (s4);
	}
	else if (s4 == NULL)
	{
		return (s3);
	}
	else if (s3 == NULL && s4 == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= strlen(s1) + 1; a++)
	{
		s3[a] = s1[a];
	}
	for (b = 0; b <= strlen(s2) ; b++)
	{
		s4[b] = s2[b];
	}
	s3 = strcat(s3, s4);
	return (s3);
}
