#include "main.h"
/**
 * *_strncat - task1
 * @dest: char
 * @src: char
 * @n: int
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n; b++, a++)
	{
		dest[a] = src[b];
	}
	{
		dest[a] = '\0';
	}
	return (dest);
}
