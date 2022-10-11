#include "main.h"
/**
 * puts_half - task7
 * @str: char
 * Return: always 0
 */
void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
		for (b = 0; b < a; b++)
		{
		a--;
		}
		for (; str[b] != '\0'; b++)
		{
			printf("%c", str[b]);
		}
		printf("\n");
}
