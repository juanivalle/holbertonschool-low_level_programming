#include "main.h"
/**
 * *_memset - task0
 * @s: char
 * @b: char
 * @n: int
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
/**
 * *_calloc - task2
 * @nmemb: int
 * @size: int
 * Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ns;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ns = malloc(size * nmemb);
	if (ns == NULL)
		return (NULL);
	_memset(ns, 0, size * nmemb);
		return (ns);
}
