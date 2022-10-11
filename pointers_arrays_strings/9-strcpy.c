#include "main.h"
/**
 * *_strcpy - task9
 * @dest: char
 * @src: char
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
		dest[a + 1] = '\0';
	}
	return (dest);
}
