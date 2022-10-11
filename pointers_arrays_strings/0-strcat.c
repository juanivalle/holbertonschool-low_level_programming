#include "main.h"
/**
 * *_strcat - task0
 * @dest: char
 * @src: char
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	{
		dest[a] = '\0';
	}
	return (dest);
}
