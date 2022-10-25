#include "main.h"
/**
 * *string_nconcat - task1
 * @s1: char
 * @s2: char
 * @n: int
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	char *s4;
	unsigned int a;
	unsigned int b;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	s3 = malloc(sizeof(char) * strlen(s1) + 2);
	s4 = malloc(sizeof(char) * n);
	if (s3 != NULL && s4 != NULL)
	{
		for (a = 0; a <= strlen(s1) + 1; a++)
			s3[a] = s1[a];
		for (b = 0; b <= n; b++)
			s4[b] = s2[b];
		s3 = strcat(s3, s4);
		{
		if (s3 == NULL)
		return (NULL);
		}
	}
	return (s3);
}
