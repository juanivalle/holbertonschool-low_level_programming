#include "main.h"
/**
 * *leet - task7
 * @a: char
 * Return: always 0
 */
char *leet(char *a)
{
	int b;
	int numeros[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char letras[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int c;

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; letras[c] != '\0'; c++)
		{
			if (letras[c] == a[b])
				a[b] = numeros[c];
		}
	}
	return (a);
}
