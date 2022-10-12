#include "main.h"
/**
 * *_strncpy - task2
 * @dest: char
 * @src: char
 * @n: int
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for (; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}

